import Lean.Data.HashSet

set_option linter.unusedVariables true

open Lean

def boo : Id (HashSet Nat) := do
  let mut vs : HashSet Nat := HashSet.empty
  for i in List.range 10 do
    /- unused variable `vs` -/
    (_, vs) := (i, vs.insert i)
  return vs
