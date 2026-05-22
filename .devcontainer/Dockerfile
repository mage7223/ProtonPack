FROM mcr.microsoft.com/devcontainers/base:ubuntu-24.04

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        build-essential \
        # Required by project task requirements.
        jq \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*
