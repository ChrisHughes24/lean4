/- Enumerable and the Decidable instance may already be in Mathlib -/

class Enumerable (α : Type u) where
  elems    : List α
  complete : ∀ a : α, a ∈ elems

def List.allTrue (p : α → Prop) [(a : α) → Decidable (p a)] : List α → Bool
  | [] => true
  | a :: as => p a && allTrue p as

theorem List.of_allTrue [(a : α) → Decidable (p a)] (hc : allTrue p as) (hin : a ∈ as) : p a := by
  induction as with
  | nil => contradiction
  | cons b bs ih =>
    cases hin with simp [allTrue] at hc
    | head => simp [*]
    | tail _ h => exact ih hc.2 h

theorem List.allTrue_of_forall [(a : α) → Decidable (p a)] (h : ∀ a, p a) : allTrue p as := by
  induction as <;> simp [allTrue, *]

instance [Enumerable α] (p : α → Prop) [(a : α) → Decidable (p a)] : Decidable (∀ a, p a) :=
  have : List.allTrue p Enumerable.elems → (a : α) → p a :=
    fun h a => List.of_allTrue h (Enumerable.complete a)
  decidable_of_decidable_of_iff (Iff.intro this List.allTrue_of_forall)

inductive States | s0 | s1 | s2 | s3 | s4 | s5 | s6 | s7 | s8 | s9 | s10 | s11 | s12 | s13 | s14 | s15 | s16 | s17 | s18 | s19 | s20 | s21 | s22 | s23 | s24 | s25 | s26 | s27 | s28 | s29 | s30 | s31 | s32 | s33 | s34
deriving DecidableEq

/- We can add a `deriving` for `Enumerable` in the future. -/
open States in
instance : Enumerable States where
  elems := [s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20, s21, s22, s23, s24, s25, s26, s27, s28, s29, s30, s31, s32, s33, s34]
  complete a := by cases a <;> decide

open States
def f : States → States → States
| s0, s0 => s0
| s0, s1 => s0
| s0, s2 => s0
| s0, s3 => s0
| s0, s4 => s0
| s0, s5 => s0
| s0, s6 => s0
| s0, s7 => s0
| s0, s8 => s0
| s0, s9 => s0
| s0, s10 => s0
| s0, s11 => s0
| s0, s12 => s0
| s0, s13 => s0
| s0, s14 => s0
| s0, s15 => s0
| s0, s16 => s0
| s0, s17 => s0
| s0, s18 => s0
| s0, s19 => s0
| s0, s20 => s0
| s0, s21 => s0
| s0, s22 => s0
| s0, s23 => s0
| s0, s24 => s0
| s0, s25 => s0
| s0, s26 => s0
| s0, s27 => s0
| s0, s28 => s0
| s0, s29 => s0
| s0, s30 => s0
| s0, s31 => s0
| s0, s32 => s0
| s0, s33 => s0
| s0, s34 => s0
| s1, s0 => s0
| s1, s1 => s0
| s1, s2 => s0
| s1, s3 => s0
| s1, s4 => s0
| s1, s5 => s0
| s1, s6 => s0
| s1, s7 => s0
| s1, s8 => s0
| s1, s9 => s0
| s1, s10 => s0
| s1, s11 => s0
| s1, s12 => s0
| s1, s13 => s0
| s1, s14 => s0
| s1, s15 => s0
| s1, s16 => s0
| s1, s17 => s0
| s1, s18 => s0
| s1, s19 => s0
| s1, s20 => s0
| s1, s21 => s0
| s1, s22 => s0
| s1, s23 => s0
| s1, s24 => s0
| s1, s25 => s0
| s1, s26 => s0
| s1, s27 => s0
| s1, s28 => s0
| s1, s29 => s0
| s1, s30 => s0
| s1, s31 => s0
| s1, s32 => s0
| s1, s33 => s0
| s1, s34 => s0
| s2, s0 => s0
| s2, s1 => s0
| s2, s2 => s0
| s2, s3 => s0
| s2, s4 => s0
| s2, s5 => s0
| s2, s6 => s0
| s2, s7 => s0
| s2, s8 => s0
| s2, s9 => s0
| s2, s10 => s0
| s2, s11 => s0
| s2, s12 => s0
| s2, s13 => s0
| s2, s14 => s0
| s2, s15 => s0
| s2, s16 => s0
| s2, s17 => s0
| s2, s18 => s0
| s2, s19 => s0
| s2, s20 => s0
| s2, s21 => s0
| s2, s22 => s0
| s2, s23 => s0
| s2, s24 => s0
| s2, s25 => s0
| s2, s26 => s0
| s2, s27 => s0
| s2, s28 => s0
| s2, s29 => s0
| s2, s30 => s0
| s2, s31 => s0
| s2, s32 => s0
| s2, s33 => s0
| s2, s34 => s0
| s3, s0 => s0
| s3, s1 => s0
| s3, s2 => s0
| s3, s3 => s0
| s3, s4 => s0
| s3, s5 => s0
| s3, s6 => s0
| s3, s7 => s0
| s3, s8 => s0
| s3, s9 => s0
| s3, s10 => s0
| s3, s11 => s0
| s3, s12 => s0
| s3, s13 => s0
| s3, s14 => s0
| s3, s15 => s0
| s3, s16 => s0
| s3, s17 => s0
| s3, s18 => s0
| s3, s19 => s0
| s3, s20 => s0
| s3, s21 => s0
| s3, s22 => s0
| s3, s23 => s0
| s3, s24 => s0
| s3, s25 => s0
| s3, s26 => s0
| s3, s27 => s0
| s3, s28 => s0
| s3, s29 => s0
| s3, s30 => s0
| s3, s31 => s0
| s3, s32 => s0
| s3, s33 => s0
| s3, s34 => s0
| s4, s0 => s0
| s4, s1 => s0
| s4, s2 => s0
| s4, s3 => s0
| s4, s4 => s0
| s4, s5 => s0
| s4, s6 => s0
| s4, s7 => s0
| s4, s8 => s0
| s4, s9 => s0
| s4, s10 => s0
| s4, s11 => s0
| s4, s12 => s0
| s4, s13 => s0
| s4, s14 => s0
| s4, s15 => s0
| s4, s16 => s0
| s4, s17 => s0
| s4, s18 => s0
| s4, s19 => s0
| s4, s20 => s0
| s4, s21 => s0
| s4, s22 => s0
| s4, s23 => s0
| s4, s24 => s0
| s4, s25 => s0
| s4, s26 => s0
| s4, s27 => s0
| s4, s28 => s0
| s4, s29 => s0
| s4, s30 => s0
| s4, s31 => s0
| s4, s32 => s0
| s4, s33 => s0
| s4, s34 => s0
| s5, s0 => s0
| s5, s1 => s0
| s5, s2 => s0
| s5, s3 => s0
| s5, s4 => s0
| s5, s5 => s0
| s5, s6 => s0
| s5, s7 => s0
| s5, s8 => s0
| s5, s9 => s0
| s5, s10 => s0
| s5, s11 => s0
| s5, s12 => s0
| s5, s13 => s0
| s5, s14 => s0
| s5, s15 => s0
| s5, s16 => s0
| s5, s17 => s0
| s5, s18 => s0
| s5, s19 => s0
| s5, s20 => s0
| s5, s21 => s0
| s5, s22 => s0
| s5, s23 => s0
| s5, s24 => s0
| s5, s25 => s0
| s5, s26 => s0
| s5, s27 => s0
| s5, s28 => s0
| s5, s29 => s0
| s5, s30 => s0
| s5, s31 => s0
| s5, s32 => s0
| s5, s33 => s0
| s5, s34 => s0
| s6, s0 => s0
| s6, s1 => s0
| s6, s2 => s0
| s6, s3 => s0
| s6, s4 => s0
| s6, s5 => s0
| s6, s6 => s0
| s6, s7 => s0
| s6, s8 => s0
| s6, s9 => s0
| s6, s10 => s0
| s6, s11 => s0
| s6, s12 => s0
| s6, s13 => s0
| s6, s14 => s0
| s6, s15 => s0
| s6, s16 => s0
| s6, s17 => s0
| s6, s18 => s0
| s6, s19 => s0
| s6, s20 => s0
| s6, s21 => s0
| s6, s22 => s0
| s6, s23 => s0
| s6, s24 => s0
| s6, s25 => s0
| s6, s26 => s0
| s6, s27 => s0
| s6, s28 => s0
| s6, s29 => s0
| s6, s30 => s0
| s6, s31 => s0
| s6, s32 => s0
| s6, s33 => s0
| s6, s34 => s0
| s7, s0 => s0
| s7, s1 => s0
| s7, s2 => s0
| s7, s3 => s0
| s7, s4 => s0
| s7, s5 => s0
| s7, s6 => s0
| s7, s7 => s0
| s7, s8 => s0
| s7, s9 => s0
| s7, s10 => s0
| s7, s11 => s0
| s7, s12 => s0
| s7, s13 => s0
| s7, s14 => s0
| s7, s15 => s0
| s7, s16 => s0
| s7, s17 => s0
| s7, s18 => s0
| s7, s19 => s0
| s7, s20 => s0
| s7, s21 => s0
| s7, s22 => s0
| s7, s23 => s0
| s7, s24 => s0
| s7, s25 => s0
| s7, s26 => s0
| s7, s27 => s0
| s7, s28 => s0
| s7, s29 => s0
| s7, s30 => s0
| s7, s31 => s0
| s7, s32 => s0
| s7, s33 => s0
| s7, s34 => s0
| s8, s0 => s0
| s8, s1 => s0
| s8, s2 => s0
| s8, s3 => s0
| s8, s4 => s0
| s8, s5 => s0
| s8, s6 => s0
| s8, s7 => s0
| s8, s8 => s0
| s8, s9 => s0
| s8, s10 => s0
| s8, s11 => s0
| s8, s12 => s0
| s8, s13 => s0
| s8, s14 => s0
| s8, s15 => s0
| s8, s16 => s0
| s8, s17 => s0
| s8, s18 => s0
| s8, s19 => s0
| s8, s20 => s0
| s8, s21 => s0
| s8, s22 => s0
| s8, s23 => s0
| s8, s24 => s0
| s8, s25 => s0
| s8, s26 => s0
| s8, s27 => s0
| s8, s28 => s0
| s8, s29 => s0
| s8, s30 => s0
| s8, s31 => s0
| s8, s32 => s0
| s8, s33 => s0
| s8, s34 => s0
| s9, s0 => s0
| s9, s1 => s0
| s9, s2 => s0
| s9, s3 => s0
| s9, s4 => s0
| s9, s5 => s0
| s9, s6 => s0
| s9, s7 => s0
| s9, s8 => s0
| s9, s9 => s0
| s9, s10 => s0
| s9, s11 => s0
| s9, s12 => s0
| s9, s13 => s0
| s9, s14 => s0
| s9, s15 => s0
| s9, s16 => s0
| s9, s17 => s0
| s9, s18 => s0
| s9, s19 => s0
| s9, s20 => s0
| s9, s21 => s0
| s9, s22 => s0
| s9, s23 => s0
| s9, s24 => s0
| s9, s25 => s0
| s9, s26 => s0
| s9, s27 => s0
| s9, s28 => s0
| s9, s29 => s0
| s9, s30 => s0
| s9, s31 => s0
| s9, s32 => s0
| s9, s33 => s0
| s9, s34 => s0
| s10, s0 => s0
| s10, s1 => s0
| s10, s2 => s0
| s10, s3 => s0
| s10, s4 => s0
| s10, s5 => s0
| s10, s6 => s0
| s10, s7 => s0
| s10, s8 => s0
| s10, s9 => s0
| s10, s10 => s0
| s10, s11 => s0
| s10, s12 => s0
| s10, s13 => s0
| s10, s14 => s0
| s10, s15 => s0
| s10, s16 => s0
| s10, s17 => s0
| s10, s18 => s0
| s10, s19 => s0
| s10, s20 => s0
| s10, s21 => s0
| s10, s22 => s0
| s10, s23 => s0
| s10, s24 => s0
| s10, s25 => s0
| s10, s26 => s0
| s10, s27 => s0
| s10, s28 => s0
| s10, s29 => s0
| s10, s30 => s0
| s10, s31 => s0
| s10, s32 => s0
| s10, s33 => s0
| s10, s34 => s0
| s11, s0 => s0
| s11, s1 => s0
| s11, s2 => s0
| s11, s3 => s0
| s11, s4 => s0
| s11, s5 => s0
| s11, s6 => s0
| s11, s7 => s0
| s11, s8 => s0
| s11, s9 => s0
| s11, s10 => s0
| s11, s11 => s0
| s11, s12 => s0
| s11, s13 => s0
| s11, s14 => s0
| s11, s15 => s0
| s11, s16 => s0
| s11, s17 => s0
| s11, s18 => s0
| s11, s19 => s0
| s11, s20 => s0
| s11, s21 => s0
| s11, s22 => s0
| s11, s23 => s0
| s11, s24 => s0
| s11, s25 => s0
| s11, s26 => s0
| s11, s27 => s0
| s11, s28 => s0
| s11, s29 => s0
| s11, s30 => s0
| s11, s31 => s0
| s11, s32 => s0
| s11, s33 => s0
| s11, s34 => s0
| s12, s0 => s0
| s12, s1 => s0
| s12, s2 => s0
| s12, s3 => s0
| s12, s4 => s0
| s12, s5 => s0
| s12, s6 => s0
| s12, s7 => s0
| s12, s8 => s0
| s12, s9 => s0
| s12, s10 => s0
| s12, s11 => s0
| s12, s12 => s0
| s12, s13 => s0
| s12, s14 => s0
| s12, s15 => s0
| s12, s16 => s0
| s12, s17 => s0
| s12, s18 => s0
| s12, s19 => s0
| s12, s20 => s0
| s12, s21 => s0
| s12, s22 => s0
| s12, s23 => s0
| s12, s24 => s0
| s12, s25 => s0
| s12, s26 => s0
| s12, s27 => s0
| s12, s28 => s0
| s12, s29 => s0
| s12, s30 => s0
| s12, s31 => s0
| s12, s32 => s0
| s12, s33 => s0
| s12, s34 => s0
| s13, s0 => s0
| s13, s1 => s0
| s13, s2 => s0
| s13, s3 => s0
| s13, s4 => s0
| s13, s5 => s0
| s13, s6 => s0
| s13, s7 => s0
| s13, s8 => s0
| s13, s9 => s0
| s13, s10 => s0
| s13, s11 => s0
| s13, s12 => s0
| s13, s13 => s0
| s13, s14 => s0
| s13, s15 => s0
| s13, s16 => s0
| s13, s17 => s0
| s13, s18 => s0
| s13, s19 => s0
| s13, s20 => s0
| s13, s21 => s0
| s13, s22 => s0
| s13, s23 => s0
| s13, s24 => s0
| s13, s25 => s0
| s13, s26 => s0
| s13, s27 => s0
| s13, s28 => s0
| s13, s29 => s0
| s13, s30 => s0
| s13, s31 => s0
| s13, s32 => s0
| s13, s33 => s0
| s13, s34 => s0
| s14, s0 => s0
| s14, s1 => s0
| s14, s2 => s0
| s14, s3 => s0
| s14, s4 => s0
| s14, s5 => s0
| s14, s6 => s0
| s14, s7 => s0
| s14, s8 => s0
| s14, s9 => s0
| s14, s10 => s0
| s14, s11 => s0
| s14, s12 => s0
| s14, s13 => s0
| s14, s14 => s0
| s14, s15 => s0
| s14, s16 => s0
| s14, s17 => s0
| s14, s18 => s0
| s14, s19 => s0
| s14, s20 => s0
| s14, s21 => s0
| s14, s22 => s0
| s14, s23 => s0
| s14, s24 => s0
| s14, s25 => s0
| s14, s26 => s0
| s14, s27 => s0
| s14, s28 => s0
| s14, s29 => s0
| s14, s30 => s0
| s14, s31 => s0
| s14, s32 => s0
| s14, s33 => s0
| s14, s34 => s0
| s15, s0 => s0
| s15, s1 => s0
| s15, s2 => s0
| s15, s3 => s0
| s15, s4 => s0
| s15, s5 => s0
| s15, s6 => s0
| s15, s7 => s0
| s15, s8 => s0
| s15, s9 => s0
| s15, s10 => s0
| s15, s11 => s0
| s15, s12 => s0
| s15, s13 => s0
| s15, s14 => s0
| s15, s15 => s0
| s15, s16 => s0
| s15, s17 => s0
| s15, s18 => s0
| s15, s19 => s0
| s15, s20 => s0
| s15, s21 => s0
| s15, s22 => s0
| s15, s23 => s0
| s15, s24 => s0
| s15, s25 => s0
| s15, s26 => s0
| s15, s27 => s0
| s15, s28 => s0
| s15, s29 => s0
| s15, s30 => s0
| s15, s31 => s0
| s15, s32 => s0
| s15, s33 => s0
| s15, s34 => s0
| s16, s0 => s0
| s16, s1 => s0
| s16, s2 => s0
| s16, s3 => s0
| s16, s4 => s0
| s16, s5 => s0
| s16, s6 => s0
| s16, s7 => s0
| s16, s8 => s0
| s16, s9 => s0
| s16, s10 => s0
| s16, s11 => s0
| s16, s12 => s0
| s16, s13 => s0
| s16, s14 => s0
| s16, s15 => s0
| s16, s16 => s0
| s16, s17 => s0
| s16, s18 => s0
| s16, s19 => s0
| s16, s20 => s0
| s16, s21 => s0
| s16, s22 => s0
| s16, s23 => s0
| s16, s24 => s0
| s16, s25 => s0
| s16, s26 => s0
| s16, s27 => s0
| s16, s28 => s0
| s16, s29 => s0
| s16, s30 => s0
| s16, s31 => s0
| s16, s32 => s0
| s16, s33 => s0
| s16, s34 => s0
| s17, s0 => s0
| s17, s1 => s0
| s17, s2 => s0
| s17, s3 => s0
| s17, s4 => s0
| s17, s5 => s0
| s17, s6 => s0
| s17, s7 => s0
| s17, s8 => s0
| s17, s9 => s0
| s17, s10 => s0
| s17, s11 => s0
| s17, s12 => s0
| s17, s13 => s0
| s17, s14 => s0
| s17, s15 => s0
| s17, s16 => s0
| s17, s17 => s0
| s17, s18 => s0
| s17, s19 => s0
| s17, s20 => s0
| s17, s21 => s0
| s17, s22 => s0
| s17, s23 => s0
| s17, s24 => s0
| s17, s25 => s0
| s17, s26 => s0
| s17, s27 => s0
| s17, s28 => s0
| s17, s29 => s0
| s17, s30 => s0
| s17, s31 => s0
| s17, s32 => s0
| s17, s33 => s0
| s17, s34 => s0
| s18, s0 => s0
| s18, s1 => s0
| s18, s2 => s0
| s18, s3 => s0
| s18, s4 => s0
| s18, s5 => s0
| s18, s6 => s0
| s18, s7 => s0
| s18, s8 => s0
| s18, s9 => s0
| s18, s10 => s0
| s18, s11 => s0
| s18, s12 => s0
| s18, s13 => s0
| s18, s14 => s0
| s18, s15 => s0
| s18, s16 => s0
| s18, s17 => s0
| s18, s18 => s0
| s18, s19 => s0
| s18, s20 => s0
| s18, s21 => s0
| s18, s22 => s0
| s18, s23 => s0
| s18, s24 => s0
| s18, s25 => s0
| s18, s26 => s0
| s18, s27 => s0
| s18, s28 => s0
| s18, s29 => s0
| s18, s30 => s0
| s18, s31 => s0
| s18, s32 => s0
| s18, s33 => s0
| s18, s34 => s0
| s19, s0 => s0
| s19, s1 => s0
| s19, s2 => s0
| s19, s3 => s0
| s19, s4 => s0
| s19, s5 => s0
| s19, s6 => s0
| s19, s7 => s0
| s19, s8 => s0
| s19, s9 => s0
| s19, s10 => s0
| s19, s11 => s0
| s19, s12 => s0
| s19, s13 => s0
| s19, s14 => s0
| s19, s15 => s0
| s19, s16 => s0
| s19, s17 => s0
| s19, s18 => s0
| s19, s19 => s0
| s19, s20 => s0
| s19, s21 => s0
| s19, s22 => s0
| s19, s23 => s0
| s19, s24 => s0
| s19, s25 => s0
| s19, s26 => s0
| s19, s27 => s0
| s19, s28 => s0
| s19, s29 => s0
| s19, s30 => s0
| s19, s31 => s0
| s19, s32 => s0
| s19, s33 => s0
| s19, s34 => s0
| s20, s0 => s0
| s20, s1 => s0
| s20, s2 => s0
| s20, s3 => s0
| s20, s4 => s0
| s20, s5 => s0
| s20, s6 => s0
| s20, s7 => s0
| s20, s8 => s0
| s20, s9 => s0
| s20, s10 => s0
| s20, s11 => s0
| s20, s12 => s0
| s20, s13 => s0
| s20, s14 => s0
| s20, s15 => s0
| s20, s16 => s0
| s20, s17 => s0
| s20, s18 => s0
| s20, s19 => s0
| s20, s20 => s0
| s20, s21 => s0
| s20, s22 => s0
| s20, s23 => s0
| s20, s24 => s0
| s20, s25 => s0
| s20, s26 => s0
| s20, s27 => s0
| s20, s28 => s0
| s20, s29 => s0
| s20, s30 => s0
| s20, s31 => s0
| s20, s32 => s0
| s20, s33 => s0
| s20, s34 => s0
| s21, s0 => s0
| s21, s1 => s0
| s21, s2 => s0
| s21, s3 => s0
| s21, s4 => s0
| s21, s5 => s0
| s21, s6 => s0
| s21, s7 => s0
| s21, s8 => s0
| s21, s9 => s0
| s21, s10 => s0
| s21, s11 => s0
| s21, s12 => s0
| s21, s13 => s0
| s21, s14 => s0
| s21, s15 => s0
| s21, s16 => s0
| s21, s17 => s0
| s21, s18 => s0
| s21, s19 => s0
| s21, s20 => s0
| s21, s21 => s0
| s21, s22 => s0
| s21, s23 => s0
| s21, s24 => s0
| s21, s25 => s0
| s21, s26 => s0
| s21, s27 => s0
| s21, s28 => s0
| s21, s29 => s0
| s21, s30 => s0
| s21, s31 => s0
| s21, s32 => s0
| s21, s33 => s0
| s21, s34 => s0
| s22, s0 => s0
| s22, s1 => s0
| s22, s2 => s0
| s22, s3 => s0
| s22, s4 => s0
| s22, s5 => s0
| s22, s6 => s0
| s22, s7 => s0
| s22, s8 => s0
| s22, s9 => s0
| s22, s10 => s0
| s22, s11 => s0
| s22, s12 => s0
| s22, s13 => s0
| s22, s14 => s0
| s22, s15 => s0
| s22, s16 => s0
| s22, s17 => s0
| s22, s18 => s0
| s22, s19 => s0
| s22, s20 => s0
| s22, s21 => s0
| s22, s22 => s0
| s22, s23 => s0
| s22, s24 => s0
| s22, s25 => s0
| s22, s26 => s0
| s22, s27 => s0
| s22, s28 => s0
| s22, s29 => s0
| s22, s30 => s0
| s22, s31 => s0
| s22, s32 => s0
| s22, s33 => s0
| s22, s34 => s0
| s23, s0 => s0
| s23, s1 => s0
| s23, s2 => s0
| s23, s3 => s0
| s23, s4 => s0
| s23, s5 => s0
| s23, s6 => s0
| s23, s7 => s0
| s23, s8 => s0
| s23, s9 => s0
| s23, s10 => s0
| s23, s11 => s0
| s23, s12 => s0
| s23, s13 => s0
| s23, s14 => s0
| s23, s15 => s0
| s23, s16 => s0
| s23, s17 => s0
| s23, s18 => s0
| s23, s19 => s0
| s23, s20 => s0
| s23, s21 => s0
| s23, s22 => s0
| s23, s23 => s0
| s23, s24 => s0
| s23, s25 => s0
| s23, s26 => s0
| s23, s27 => s0
| s23, s28 => s0
| s23, s29 => s0
| s23, s30 => s0
| s23, s31 => s0
| s23, s32 => s0
| s23, s33 => s0
| s23, s34 => s0
| s24, s0 => s0
| s24, s1 => s0
| s24, s2 => s0
| s24, s3 => s0
| s24, s4 => s0
| s24, s5 => s0
| s24, s6 => s0
| s24, s7 => s0
| s24, s8 => s0
| s24, s9 => s0
| s24, s10 => s0
| s24, s11 => s0
| s24, s12 => s0
| s24, s13 => s0
| s24, s14 => s0
| s24, s15 => s0
| s24, s16 => s0
| s24, s17 => s0
| s24, s18 => s0
| s24, s19 => s0
| s24, s20 => s0
| s24, s21 => s0
| s24, s22 => s0
| s24, s23 => s0
| s24, s24 => s0
| s24, s25 => s0
| s24, s26 => s0
| s24, s27 => s0
| s24, s28 => s0
| s24, s29 => s0
| s24, s30 => s0
| s24, s31 => s0
| s24, s32 => s0
| s24, s33 => s0
| s24, s34 => s0
| s25, s0 => s0
| s25, s1 => s0
| s25, s2 => s0
| s25, s3 => s0
| s25, s4 => s0
| s25, s5 => s0
| s25, s6 => s0
| s25, s7 => s0
| s25, s8 => s0
| s25, s9 => s0
| s25, s10 => s0
| s25, s11 => s0
| s25, s12 => s0
| s25, s13 => s0
| s25, s14 => s0
| s25, s15 => s0
| s25, s16 => s0
| s25, s17 => s0
| s25, s18 => s0
| s25, s19 => s0
| s25, s20 => s0
| s25, s21 => s0
| s25, s22 => s0
| s25, s23 => s0
| s25, s24 => s0
| s25, s25 => s0
| s25, s26 => s0
| s25, s27 => s0
| s25, s28 => s0
| s25, s29 => s0
| s25, s30 => s0
| s25, s31 => s0
| s25, s32 => s0
| s25, s33 => s0
| s25, s34 => s0
| s26, s0 => s0
| s26, s1 => s0
| s26, s2 => s0
| s26, s3 => s0
| s26, s4 => s0
| s26, s5 => s0
| s26, s6 => s0
| s26, s7 => s0
| s26, s8 => s0
| s26, s9 => s0
| s26, s10 => s0
| s26, s11 => s0
| s26, s12 => s0
| s26, s13 => s0
| s26, s14 => s0
| s26, s15 => s0
| s26, s16 => s0
| s26, s17 => s0
| s26, s18 => s0
| s26, s19 => s0
| s26, s20 => s0
| s26, s21 => s0
| s26, s22 => s0
| s26, s23 => s0
| s26, s24 => s0
| s26, s25 => s0
| s26, s26 => s0
| s26, s27 => s0
| s26, s28 => s0
| s26, s29 => s0
| s26, s30 => s0
| s26, s31 => s0
| s26, s32 => s0
| s26, s33 => s0
| s26, s34 => s0
| s27, s0 => s0
| s27, s1 => s0
| s27, s2 => s0
| s27, s3 => s0
| s27, s4 => s0
| s27, s5 => s0
| s27, s6 => s0
| s27, s7 => s0
| s27, s8 => s0
| s27, s9 => s0
| s27, s10 => s0
| s27, s11 => s0
| s27, s12 => s0
| s27, s13 => s0
| s27, s14 => s0
| s27, s15 => s0
| s27, s16 => s0
| s27, s17 => s0
| s27, s18 => s0
| s27, s19 => s0
| s27, s20 => s0
| s27, s21 => s0
| s27, s22 => s0
| s27, s23 => s0
| s27, s24 => s0
| s27, s25 => s0
| s27, s26 => s0
| s27, s27 => s0
| s27, s28 => s0
| s27, s29 => s0
| s27, s30 => s0
| s27, s31 => s0
| s27, s32 => s0
| s27, s33 => s0
| s27, s34 => s0
| s28, s0 => s0
| s28, s1 => s0
| s28, s2 => s0
| s28, s3 => s0
| s28, s4 => s0
| s28, s5 => s0
| s28, s6 => s0
| s28, s7 => s0
| s28, s8 => s0
| s28, s9 => s0
| s28, s10 => s0
| s28, s11 => s0
| s28, s12 => s0
| s28, s13 => s0
| s28, s14 => s0
| s28, s15 => s0
| s28, s16 => s0
| s28, s17 => s0
| s28, s18 => s0
| s28, s19 => s0
| s28, s20 => s0
| s28, s21 => s0
| s28, s22 => s0
| s28, s23 => s0
| s28, s24 => s0
| s28, s25 => s0
| s28, s26 => s0
| s28, s27 => s0
| s28, s28 => s0
| s28, s29 => s0
| s28, s30 => s0
| s28, s31 => s0
| s28, s32 => s0
| s28, s33 => s0
| s28, s34 => s0
| s29, s0 => s0
| s29, s1 => s0
| s29, s2 => s0
| s29, s3 => s0
| s29, s4 => s0
| s29, s5 => s0
| s29, s6 => s0
| s29, s7 => s0
| s29, s8 => s0
| s29, s9 => s0
| s29, s10 => s0
| s29, s11 => s0
| s29, s12 => s0
| s29, s13 => s0
| s29, s14 => s0
| s29, s15 => s0
| s29, s16 => s0
| s29, s17 => s0
| s29, s18 => s0
| s29, s19 => s0
| s29, s20 => s0
| s29, s21 => s0
| s29, s22 => s0
| s29, s23 => s0
| s29, s24 => s0
| s29, s25 => s0
| s29, s26 => s0
| s29, s27 => s0
| s29, s28 => s0
| s29, s29 => s0
| s29, s30 => s0
| s29, s31 => s0
| s29, s32 => s0
| s29, s33 => s0
| s29, s34 => s0
| s30, s0 => s0
| s30, s1 => s0
| s30, s2 => s0
| s30, s3 => s0
| s30, s4 => s0
| s30, s5 => s0
| s30, s6 => s0
| s30, s7 => s0
| s30, s8 => s0
| s30, s9 => s0
| s30, s10 => s0
| s30, s11 => s0
| s30, s12 => s0
| s30, s13 => s0
| s30, s14 => s0
| s30, s15 => s0
| s30, s16 => s0
| s30, s17 => s0
| s30, s18 => s0
| s30, s19 => s0
| s30, s20 => s0
| s30, s21 => s0
| s30, s22 => s0
| s30, s23 => s0
| s30, s24 => s0
| s30, s25 => s0
| s30, s26 => s0
| s30, s27 => s0
| s30, s28 => s0
| s30, s29 => s0
| s30, s30 => s0
| s30, s31 => s0
| s30, s32 => s0
| s30, s33 => s0
| s30, s34 => s0
| s31, s0 => s0
| s31, s1 => s0
| s31, s2 => s0
| s31, s3 => s0
| s31, s4 => s0
| s31, s5 => s0
| s31, s6 => s0
| s31, s7 => s0
| s31, s8 => s0
| s31, s9 => s0
| s31, s10 => s0
| s31, s11 => s0
| s31, s12 => s0
| s31, s13 => s0
| s31, s14 => s0
| s31, s15 => s0
| s31, s16 => s0
| s31, s17 => s0
| s31, s18 => s0
| s31, s19 => s0
| s31, s20 => s0
| s31, s21 => s0
| s31, s22 => s0
| s31, s23 => s0
| s31, s24 => s0
| s31, s25 => s0
| s31, s26 => s0
| s31, s27 => s0
| s31, s28 => s0
| s31, s29 => s0
| s31, s30 => s0
| s31, s31 => s0
| s31, s32 => s0
| s31, s33 => s0
| s31, s34 => s0
| s32, s0 => s0
| s32, s1 => s0
| s32, s2 => s0
| s32, s3 => s0
| s32, s4 => s0
| s32, s5 => s0
| s32, s6 => s0
| s32, s7 => s0
| s32, s8 => s0
| s32, s9 => s0
| s32, s10 => s0
| s32, s11 => s0
| s32, s12 => s0
| s32, s13 => s0
| s32, s14 => s0
| s32, s15 => s0
| s32, s16 => s0
| s32, s17 => s0
| s32, s18 => s0
| s32, s19 => s0
| s32, s20 => s0
| s32, s21 => s0
| s32, s22 => s0
| s32, s23 => s0
| s32, s24 => s0
| s32, s25 => s0
| s32, s26 => s0
| s32, s27 => s0
| s32, s28 => s0
| s32, s29 => s0
| s32, s30 => s0
| s32, s31 => s0
| s32, s32 => s0
| s32, s33 => s0
| s32, s34 => s0
| s33, s0 => s0
| s33, s1 => s0
| s33, s2 => s0
| s33, s3 => s0
| s33, s4 => s0
| s33, s5 => s0
| s33, s6 => s0
| s33, s7 => s0
| s33, s8 => s0
| s33, s9 => s0
| s33, s10 => s0
| s33, s11 => s0
| s33, s12 => s0
| s33, s13 => s0
| s33, s14 => s0
| s33, s15 => s0
| s33, s16 => s0
| s33, s17 => s0
| s33, s18 => s0
| s33, s19 => s0
| s33, s20 => s0
| s33, s21 => s0
| s33, s22 => s0
| s33, s23 => s0
| s33, s24 => s0
| s33, s25 => s0
| s33, s26 => s0
| s33, s27 => s0
| s33, s28 => s0
| s33, s29 => s0
| s33, s30 => s0
| s33, s31 => s0
| s33, s32 => s0
| s33, s33 => s0
| s33, s34 => s0
| s34, s0 => s0
| s34, s1 => s0
| s34, s2 => s0
| s34, s3 => s0
| s34, s4 => s0
| s34, s5 => s0
| s34, s6 => s0
| s34, s7 => s0
| s34, s8 => s0
| s34, s9 => s0
| s34, s10 => s0
| s34, s11 => s0
| s34, s12 => s0
| s34, s13 => s0
| s34, s14 => s0
| s34, s15 => s0
| s34, s16 => s0
| s34, s17 => s0
| s34, s18 => s0
| s34, s19 => s0
| s34, s20 => s0
| s34, s21 => s0
| s34, s22 => s0
| s34, s23 => s0
| s34, s24 => s0
| s34, s25 => s0
| s34, s26 => s0
| s34, s27 => s0
| s34, s28 => s0
| s34, s29 => s0
| s34, s30 => s0
| s34, s31 => s0
| s34, s32 => s0
| s34, s33 => s0
| s34, s34 => s0
set_option maxHeartbeats 0

example : ∀ x y z, f (f (f s0 x) y) z = f (f x z) (f y z) := by
 native_decide
