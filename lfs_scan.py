import os

# 扫描当前目录及其子目录下所有文件，找到大小达到100M的文件并添加到git lfs中
def scan_and_add_to_git_lfs():
    os.remove(".gitattributes")
    for root, dirs, files in os.walk('.'):
        for filename in files:
            filepath = os.path.join(root, filename)
            if os.path.getsize(filepath) >= 100 * 1024 * 1024: # 文件大小达到100M
                os.system(f'git lfs track "{filepath}"') # 添加到git lfs中
                print(f'Added {filepath} to git lfs')

scan_and_add_to_git_lfs()
