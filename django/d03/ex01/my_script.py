#!usr/bin/python3

from path import Path

def build_project():
    dir_name = "new_dir"
    file_name = f"./{dir_name}/new_file.txt"
    content = "efhafelajefajgiorjejg;aefj"
    try:
        Path.mkdir(dir_name)
    except:
        print("Directory already exists")
        
    Path.touch(file_name)
    with open(file_name,'w') as f:
        f.write(content)

    with open(file_name,'r') as f:
        text = f.read()
        print(text)

if __name__ =="__main__":
    build_project()