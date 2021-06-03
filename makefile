build:
	emcc hello.c -o hello.html --emrun
run:
	emrun --no_browser --port 8080 .
