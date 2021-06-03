build:
	emcc hello.c -o index.html --emrun
run:
	emrun --no_browser --port 8080 .
