GROQ_API_KEY='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'

import getpass
import os

if not os.environ.get("GROQ_API_KEY"):
    os.environ["GROQ_API_KEY"]= GROQ_API_KEY
    
from langchain.chat_models import init_chat_model

model=init_chat_model("llama3-8b-8192", model_provider="groq")

while True:
    response= model.invoke(input('Enter Any Msg: '))
    print(response.content)