//prime seive: generates all prime numbers <bound
import Foundation

func seive(bound: Int) -> Array<Int>
{
    var boolArr = Array (repeating: true, count: bound)
    var primeArr = [Int]()
    boolArr[0] = false; boolArr[1] = false;
    
    for a in 2...(Int(ceil(sqrt(Double(bound))))+1) {
        if boolArr[a] {
            for j in stride(from: a*a, to: bound, by: a) {
                boolArr[j] = false
            }
        }
    }
    for p in 0...boolArr.count-1 {
        if boolArr[p] == true {
            primeArr.append(p)
        }
    }
    return (primeArr)
}

print(seive(bound:1000))
