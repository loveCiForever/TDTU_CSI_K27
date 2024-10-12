public class Fraction {
    private int numerator = 0;
    private int denominator = 1;

    public Fraction() {
    }

    public Fraction(int numerator, int denominator) {
        this.numerator = numerator;
        this.denominator = denominator;
    }

    public Fraction(Fraction f) {
        this.numerator = f.numerator;
        this.denominator = f.denominator;
    }

    @Override
    public String toString() {
        return String.format("%d / %d",  numerator, denominator);
    }

    public boolean equals(Object f) {
        if(f instanceof Fraction) {
            Fraction tmp = (Fraction)f;
            return (this.numerator == tmp.numerator && this.denominator == tmp.denominator);
        } else {
            return false;
        }
    }
}
