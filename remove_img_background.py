
from rembg import remove
from PIL import Image


input_path = input("write the input path: ")
output_path = input("where do you want to save the file")

input = Image.open(input_path)
output = remove(input)
output.save(output_path) 


