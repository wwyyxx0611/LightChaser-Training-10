import os
from dotenv import load_dotenv
from openai import OpenAI

# 1. 尝试读取 .env
load_dotenv()

# --- 探针开始 ---
key = os.getenv("DEEPSEEK_API_KEY")
if not key:
    print("❌ 严重错误：没有在 .env 文件中读取到 DEEPSEEK_API_KEY！")
    print("请检查：1. 文件名是否为.env  2. 是否有空格  3. 是否按了Ctrl+S保存")
    exit()
else:
    print(f"✅ 成功读取到 Key，前几位是: {key[:5]}...")
# --- 探针结束 ---

# 2. 初始化客户端
client = OpenAI(
    api_key=key,
    base_url="https://api.deepseek.com", 
)

print("正在思考中，请稍候...")

try:
    resp = client.chat.completions.create(
        model="deepseek-chat", 
        messages=[
            {"role": "system", "content": "你是一名耐心的大一助教"},
            {"role": "user", "content": "用三句话解释什么是边缘检测"},
        ],
    )
    print("\n--- AI 回答 ---")
    print(resp.choices[0].message.content)

except Exception as e:
    print(f"\n请求出错了: {e}")