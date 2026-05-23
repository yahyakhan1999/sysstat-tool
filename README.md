# sysstat-tool

A system-level C utility packaged as a Debian `.deb` that reads CPU and
memory statistics directly from the Linux kernel proc filesystem.

## What it does

== System Stats Collector ==
=== Memory Info ===
MemTotal:       16234556 kB
MemFree:         3201234 kB
MemAvailable:    8765432 kB
=== CPU Load Average ===
0.52 0.48 0.45 2/834 12453

## How it works

Reads directly from Linux kernel virtual filesystem:
- `/proc/meminfo` — kernel memory statistics
- `/proc/loadavg` — CPU load averages

No libraries or abstractions — direct kernel interface via file I/O.

## Install

```bash
sudo apt install ./sysstat-tool_1.0-1_amd64.deb
sysstat
```

## Build from source

```bash
make
sudo apt install ./path/to/sysstat-tool_1.0-1_amd64.deb
```

## Docker

Run without installing anything:

```bash
docker run yahyakhan1999/sysstat-tool
```

Or build it yourself:

```bash
docker build -t sysstat-tool .
docker run sysstat-tool
```
