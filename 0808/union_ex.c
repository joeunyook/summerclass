#include <stdio.h>

struct st_color
{
	unsigned char blue;
	unsigned char green;
	unsigned char red;
	unsigned char alpha;
};

union un_color
{
	struct st_color channel;
	int code;
};

typedef union un_color color_t;

int main(void)
{
	color_t color;
	color.channel.alpha = 0;
	color.channel.red = 51;
	color.channel.green = 204;
	color.channel.blue = 255;

	printf("%x\n", color.code);

	color_t color2;
	color2.code = 0x9900cc;
	printf("r:%u\t", color2.channel.red);
	printf("g:%u\t", color2.channel.green);
	printf("b:%u\t", color2.channel.blue);
	printf("\n");

	return 0;
}
