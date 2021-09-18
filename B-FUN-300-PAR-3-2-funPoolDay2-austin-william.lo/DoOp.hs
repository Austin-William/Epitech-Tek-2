import Data.Char

myElem :: Eq a => a -> [a] -> Bool
myElem y [] = False
myElem y (x:xs)
    | y == x = True
    | otherwise = myElem y xs

safeDiv :: Int -> Int -> Maybe Int
safeDiv a 0 = Nothing
safeDiv a b = Just (a `div` b)

safeNth :: [a] -> Int -> Maybe a
safeNth (x:_) 0 = Just x
safeNth (x:xs) n
    | n < 0 = Nothing
    | n >= length xs = Nothing
    | otherwise = safeNth xs (n-1)

safeSucc :: Maybe Int -> Maybe Int
safeSucc (Just a) = Just(a+1)
safeSucc Nothing = Nothing

myLookup :: Eq a => a -> [(a, b)] -> Maybe b
myLookup n [] = Nothing
myLookup n ((x, y):xs) = case n == x of
    True -> Just y
    False -> myLookup n xs

maybeDo :: (a -> b -> c) -> Maybe a -> Maybe b -> Maybe c
maybeDo x Nothing Nothing = Nothing
maybeDo x Nothing (Just z) = Nothing
maybeDo x (Just y) Nothing = Nothing
maybeDo x (Just y) (Just z) = Just (x y z)

readInt :: [Char] -> Maybe Int
readInt [] = Nothing
readInt str = case all isDigit str of
    True -> Just (read str)
    False -> Nothing

getLineLength :: IO Int
getLineLength = do
    line <- getLine
    return (length line)

printAndGetLength :: String -> IO Int
printAndGetLength str = do
    putStrLn str
    return (length str)