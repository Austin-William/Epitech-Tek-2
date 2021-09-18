mySucc :: Int -> Int
mySucc a = a+1

myIsNeg :: Int -> Bool
myIsNeg a | a < 0 = True
          | otherwise = False

myAbs :: Int -> Int
myAbs a | a < 0 = -a
        | otherwise = a

myMin :: Int -> Int -> Int
myMin 0 b = b
myMin a b | a < b = a
          | otherwise = b

myMax :: Int -> Int -> Int
myMax 0 b = b
myMax a b | a < b = b
          | otherwise = a

myTuple :: a -> b -> (a, b)
myTuple a b = (a, b)

myTruple :: a -> b -> c -> (a, b, c)
myTruple a b c = (a, b ,c)

myFst :: (a, b) -> a
myFst (a, b) = a

mySnd :: (a, b) -> b
mySnd (a, b) = b

mySwap :: (a, b) -> (b, a)
mySwap (a, b) = (b, a)

myHead :: [a] -> a
myHead [] = error "Error"
myHead (a:_) = a

myTail :: [a] -> [a]
myTail [] = error "Error"
myTail (_:a) = a

myLength :: [a] -> Int
myLength [] = 0
myLength (_:xs) = 1 + myLength xs

myNth :: [a] -> Int -> a
myNth (x:_) 0 = x
myNth (x:xs) n | n < 0 = error "Error < 0"
           | n >= myLength xs = error "Error > 0"
           | otherwise = myNth xs (n-1)

myTake :: Int -> [a] -> [a]
myTake 0 (x:_) = []
myTake n (x:xs) | n < 0 = error "Error < 0"
                | n >= myLength xs = (x:xs)
                | otherwise = x : myTake (n-1) xs

myDrop :: Int -> [a] -> [a]
myDrop 0 (x:_) = []
myDrop n (x:xs) | n < 0 = []
                | n >= myLength (x:xs) = []
                | otherwise = x : myDrop (n-1) xs

myAppend :: [a] -> [a] -> [a]
myAppend (x:xs) ys = x : myAppend xs ys
myAppend [] x = x

myReverse :: [a] -> [a]
myReverse xs = reverseList xs []
    where reverseList xs xy = if null xs then xy
                              else reverseList (myTail xs) ((myHead xs):xy)

myInit :: [a] -> [a]
myInit [] = error "Error empty list"
myInit (x:[]) = [x]
myInit (x:xs:[]) = [x]
myInit (x:xs) = x : myInit xs

myLast :: [a] -> a
myLast [] = error "Error empty list"
myLast (x:[]) = x
myLast (x:xs) = myLast xs

myZip :: [a] -> [b] -> [(a,b)]
myZip (x:xs) (y:xy) = (x,y) : myZip xs xy
myZip _      _      = []

myUnzip :: [(a, b)] -> ([a], [b])
myUnzip [] = ([], [])
myUnzip xs = (myMap myFst xs, myMap mySnd xs)

myMap :: (a -> b) -> [a] -> [b]
myMap xs [] = []
myMap xs (y:xy) = xs y : myMap xs xy