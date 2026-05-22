FROM mcr.microsoft.com/devcontainers/base:ubuntu-24.04

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        build-essential \
        python3 \
        python3-pip \
        python3-venv \
        # Required by project task requirements.
        jq \
    && python3 -m pip install --no-cache-dir --break-system-packages platformio \
    && ln -sf /usr/local/bin/pio /usr/local/bin/platformio \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*
