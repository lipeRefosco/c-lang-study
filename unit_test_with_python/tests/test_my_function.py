from ctypes import *
import subprocess

MODULE_NAME = 'my_function'
COMPILE_MODULE_COMMAND = ['gcc', '-shared', '-o', MODULE_NAME + '.so', MODULE_NAME + '.c']

def compile_module() -> CDLL:
    subprocess.call(COMPILE_MODULE_COMMAND)
    return CDLL(f"./{MODULE_NAME}.so")


class TestMyFunctionInC:
    my_function = compile_module()

    def test_3_pow(self):
        given = 3
        expect = 9
        result = self.my_function.square(given) == expect
        assert result
