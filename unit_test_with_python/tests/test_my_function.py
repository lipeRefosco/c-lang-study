from ctypes import *

class TestMyFunctionInC:
    
    so_file = "../my_function.so"
    my_function = CDLL(so_file)

    def test_3_pow(self):
        given = 3
        expect = 9
        result = self.my_function.square(given) == expect
        assert result