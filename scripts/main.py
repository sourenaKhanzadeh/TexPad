import os
import sys

# add the parent directory to the path
sys.path.append(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from python import texpad
from python import parser

if __name__ == '__main__':
    print(texpad.__doc__)
    p = parser.Parser()
    p.parse(texpad.__doc__)
