run: 
	iverilog -o main main.v 
	main

clean:
	rm main
