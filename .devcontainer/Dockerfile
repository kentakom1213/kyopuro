# [Choice] Debian / Ubuntu version: debian-10, debian-9
ARG VARIANT=buster
FROM mcr.microsoft.com/vscode/devcontainers/base:${VARIANT}

# Install needed packages. Use a separate RUN statement to add your own dependencies.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install build-essential cmake cppcheck valgrind clang lldb llvm \
    && apt-get autoremove -y && apt-get clean -y && rm -rf /var/lib/apt/lists/*

# [Optional] Uncomment this section to install additional OS packages.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends curl python3-distutils vim

# Install pip3 and tools
RUN curl https://bootstrap.pypa.io/get-pip.py -o /tmp/get-pip.py \
    && python3 /tmp/get-pip.py \
    && rm -f /tmp/get-pip.py \
    && pip3 install online-judge-verify-helper \
    && pip3 install online-judge-tools

RUN apt -y install npm \
    && npm install -g atcoder-cli

# starshipの導入
RUN sh -c "$(curl -fsSL https://starship.rs/install.sh)" \
    && echo 'eval "$(starship init bash)"' >> ~/.bashrc
# # configの配置
# RUN mkdir ~/.config
# COPY starship.toml ~/.config/

# make venv
# RUN apt update \
#     && apt install -y python3-venv \
#     && python3 -m venv .kyopuro

# install Miniconda
# https://qiita.com/Gushi_maru/items/be7b5124a382e699e79d