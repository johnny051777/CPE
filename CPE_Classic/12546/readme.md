# UVA12546

## -2進位計算機

- 解題思路:
-2進位計算機 運算方式如下:
  (1) 'input'為N、output為字串'ans'
  (2) N除以-2
  (3) 檢查餘數:
    if 若餘數為-1: 則商數加1，並且'ans'push 1
    else if 若餘數為0: 'ans' push 0
    else 餘數為1: 'ans' push 1
  (4) 檢查商值是否為0，是則'break'，否則'return to (2)'
