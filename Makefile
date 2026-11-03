CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c11 -g

# Сборка любого файла: `make chapter_6/while1`
%: %.c
	$(CC) $(CFLAGS) $< -o $@

# Команда автоматического коммита и отправки
# Использование: make done FILE=chapter_6/while1.c
done:
	@if [ -z "$(FILE)" ]; then echo "Ошибка: укажите файл. Пример: make done FILE=chapter_6/while1.c"; exit 1; fi
	git add $(FILE) README.md
	git commit -m "Complete: $$(basename $(FILE) .c)"
	git push origin main
	@echo "🚀 Упражнение отправлено в GitHub! Квадрат позеленел."

clean:
	find . -type f -executable ! -name "*.*" -delete
