# !/bin/bash
# Script em bash para printar todo o alfabeto (slop de IA)
# Faça: $ mkdir -p ~/.local/bin
# Cole em: $ vim ~/.local/bin/alfabeto.sh
# Faça: $ echo $PATH. Se aparecer ~/.local/bin no output, está certo
# Faça: $ chmod +x ~/.local/bin/alfabeto.sh
# Faça: source ~/.bashrc
# Uso comum: $ alfabeto.sh

for i in {0..25}; do
	letra=$(printf "\\$(printf '%03o' $((97 + i)))")
	printf "%s%d" "$letra" "$((i + 1))"

	if [ "$i" -lt 25 ]; then
		printf ", "
	fi
	done

printf "\n"
