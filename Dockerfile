# Start from a minimal Debian base image
FROM debian:bookworm-slim

# Install gcc to compile our C code
RUN apt-get update && apt-get install -y gcc && rm -rf /var/lib/apt/lists/*

# Copy our source code into the container
COPY sysstat.c /app/sysstat.c

# Compile it
RUN gcc -Wall -O2 -o /app/sysstat /app/sysstat.c

# Run it when container starts
CMD ["/app/sysstat"]
