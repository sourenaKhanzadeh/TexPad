import os
import sys

# add the parent directory to the path
sys.path.append(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from python import TexPad

if __name__ == '__main__':
    print(TexPad())