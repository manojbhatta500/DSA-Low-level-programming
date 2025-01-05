package main

import "testing"

func TestFunct(t *testing.T) {
	want := "hello, manoj!"
	got := helloweb("manoj")

	if want != got {
		t.Errorf("wanted %s &  got %s ", want, got)
	}
}
