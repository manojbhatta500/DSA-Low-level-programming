package main

import "fmt"

type Stack []string

func (s *Stack) IsEmpty() bool {
	if len(*s) == 0 {
		return true
	} else {
		return false
	}
}

func (s *Stack) Push(element string) {
	(*s) = append((*s), element)
}

func (s *Stack) Pop() {
	if s.IsEmpty() {
		fmt.Println("sorry can't perform pop on the empty stack")
		return
	}
	lastIndex := len(*s) - 1
	(*s) = (*s)[:lastIndex]
	fmt.Println("Item popped from stack")
}

func (s *Stack) printer() {
	for i, v := range *s {
		fmt.Printf("%d . %s \n", i+1, v)
	}
}

func main() {
	var s Stack

	s.Push("manoj")
	s.Push("bhatta")
	s.Push("golnag enginner")
	s.Push("flutter enginner")
	fmt.Println("before popping")
	s.printer()
	s.Pop()
	fmt.Println("after popping")
	s.printer()

}
