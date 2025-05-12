FROM ubuntu:25.04

ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update
RUN apt-get install -y --no-install-recommends \
    binutils-arm-none-eabi \
    build-essential \
    ccache \
    clangd \
    cmake \
    file \
    gcc-arm-none-eabi \
    git \
    gperf \
    less \
    libnewlib-arm-none-eabi \
    libsdl2-dev \
    ninja-build \
    python3-dev \
    python3-intelhex \
    python3-pip \
    python3-setuptools \
    python3-tk \
    python3-wheel \
    sudo \
    tmux \
    vim \
    wget \
    xz-utils

# New added for disable sudo password
RUN echo '%sudo ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers

USER ubuntu

# Launch bash shell by default
CMD ["/bin/bash"]
