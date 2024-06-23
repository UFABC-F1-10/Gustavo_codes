### Install Ollama

```bash
curl -fsSL https://ollama.com/install.sh | sh
```

```bash
# Add a model to Ollama
ollama pull llama3
ollama pull gemma
ollama pull llava
ollama pull codellama
```

## "Watch" GPU Performance in Linux

```bash 
watch -n 0.5 nvidia-smi
```
## Use NVtop

```bash
sudo apt install -y nvtop
nvtop
```
## Install Docker

```bash
# Add Docker's official GPG key:
sudo apt-get update
sudo apt-get install ca-certificates curl
sudo install -m 0755 -d /etc/apt/keyrings
sudo curl -fsSL https://download.docker.com/linux/ubuntu/gpg -o /etc/apt/keyrings/docker.asc 
sudo chmod a+r /etc/apt/keyrings/docker.asc
```

# Add the repository to Apt sources:`  
```bash
echo \
"deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.asc] https://download.docker.com/linux/ubuntu \
$(. /etc/os-release && echo "$VERSION_CODENAME") stable" | \ 
sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
sudo apt-get update
```

```bash
#Install Docker
sudo apt-get install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin
```

## `Run Open WebUi Docker Container`

```bash
docker run -d --network=host -v open-webui:/app/backend/data -e OLLAMA_BASE_URL=http://127.0.0.1:11434 --name open-webui --restart always ghcr.io/open-webui/open-webui:main
```

## References:

### web open ui:
https://github.com/open-webui/open-webui
https://ollama.com/download/linux
https://github.com/ollama/ollama