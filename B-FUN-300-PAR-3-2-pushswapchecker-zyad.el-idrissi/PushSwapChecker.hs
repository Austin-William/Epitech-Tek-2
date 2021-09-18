import Data.List ( sort )
import Data.Char ( isDigit )
import System.Environment ( getArgs )
import System.Exit ( ExitCode(ExitFailure), exitWith )

saFunction :: [a] -> [a]
saFunction [] = []
saFunction (x:xa:xs) = xa : x : xs

sbFunction :: [b] -> [b]
sbFunction [] = []
sbFunction (x:xb:xs) = xb : x : xs

paFunction :: [b] -> [b] -> [b]
paFunction [] [] = []
paFunction [] b = []
paFunction (x:xs) (y:ys) = x:(y:ys)

pbFunction :: [b] -> [b] -> [b]
pbFunction [] [] = []
pbFunction [] b = []
pbFunction (x:xs) (y:ys) = x:(y:ys)

raFunction :: [a] -> [a]
raFunction xa = tail xa ++ [head xa]

rbFunction :: [b] -> [b]
rbFunction xb = tail xb ++ [head xb]

rraFunction :: [a] -> [a]
rraFunction [] = []
rraFunction xa = last xa : init xa

rrbFunction :: [b] -> [b]
rrbFunction [] = []
rrbFunction xb = last xb : init xb

checkEcho2 :: [String] -> Bool
checkEcho2 (x : xs) = case x of
  "rb" -> checkEcho xs
  "rr" -> checkEcho xs
  "rra" -> checkEcho xs
  "rrb" -> checkEcho xs
  "rrr" -> checkEcho xs
  _ -> False

checkEcho :: [String] -> Bool
checkEcho [] = True
checkEcho (x : xs) = case x of
  "sa" -> checkEcho xs
  "sb" -> checkEcho xs
  "sc" -> checkEcho xs
  "pa" -> checkEcho xs
  "pb" -> checkEcho xs
  "ra" -> checkEcho xs
  xs -> checkEcho2 [x]

readDigit :: [String] -> Bool
readDigit [] = True
readDigit (a : as)
  | length (filter isDigit a) == length a = readDigit as
  | otherwise = False

convertStrToInt :: [String] -> [Int]
convertStrToInt = map read

checkOp2 :: [Int] -> [Int] -> [String] -> IO ()
checkOp2 l_a l_b [] = if ((l_a /= []) && l_a == sort l_a)
    || ((l_b /= []) && l_b == sort l_b)
    then putStrLn "OK"
    else putStrLn "KO" >> exitWith(ExitFailure 84)

checkOp :: [Int] -> [Int] -> [String] -> IO ()
checkOp l_a l_b [] = checkOp2 l_a l_b []
checkOp l_a l_b (op : ops)
  | op == "sa" = checkOp (saFunction l_a) l_b ops
  | op == "sb" = checkOp l_a (sbFunction l_b) ops
  | op == "sc" = checkOp (saFunction l_a) (sbFunction l_b) ops
  | op == "pa" && not (null l_b) = checkOp (paFunction l_a l_b) (tail l_b) ops
  | op == "pb" && not (null l_a) = checkOp (tail l_a) (pbFunction l_b l_a) ops
  | op == "ra" = checkOp (raFunction l_a) l_b ops
  | op == "rb" = checkOp l_a (rbFunction l_b) ops
  | op == "rr" = checkOp (raFunction l_a) (rbFunction l_b) ops
  | op == "rra" = checkOp (rraFunction l_a) l_b ops
  | op == "rrb" = checkOp l_a (rrbFunction l_b) ops
  | op == "rrr" = checkOp (rraFunction l_a) (rrbFunction l_b) ops
  | otherwise = checkOp l_a l_b ops

main :: IO ()
main = do
    args <- getArgs
    line <- getLine
    if not (checkEcho (words line)) || not (readDigit args)
    then exitWith (ExitFailure 84)
    else checkOp (convertStrToInt args) [] (words line)