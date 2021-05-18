#include "aes.h"

void print_hex(const uint8_t * data, const long num_bytes);

int main(int argc, const char * argv[])
{
	const char * key = "f9an,c;!@#s9csaa";
	aes_encrypt_file("/Users/madeline/test.txt", "/Users/madeline/test.enc", key);
	
	/*
    const char * str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam gravida ornare arcu, eu porta quam mattis condimentum. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Nam id velit eu nisl efficitur aliquam id non elit. Duis egestas lorem et nibh facilisis lacinia quis dictum arcu. Aliquam euismod fringilla dolor, a hendrerit mi eleifend sit amet. Cras aliquam nisi vitae ex pharetra, nec tincidunt enim aliquam. Curabitur diam eros, rutrum id elementum a, sagittis sit amet nisi. Nam sed massa ut sem gravida pharetra. Phasellus tincidunt eros metus, varius iaculis quam porttitor at. Aenean sit amet quam ante. Mauris dapibus orci nisi, et pulvinar ante facilisis sit amet. Nullam tincidunt tempus nunc, non feugiat libero bibendum id. Aenean porttitor nec lacus sed eleifend.";
    long num_bytes = strlen(str);
    const char * key = "f9an,c;!@#s9csaa";
	
	
	for(int i=0; i<10; i++) {
		printf("Original:\t%s\n", str);
		
		uint8_t * enc = aes_encrypt_string((uint8_t *)str, num_bytes, key);
		printf("Encrypted:\t");
		print_hex(enc, num_bytes);
		printf("\n");

		uint8_t * dec = aes_decrypt_string(enc, num_bytes, key);
		printf("Decrypted:\t%s\n", dec);
		
		memset(enc, '\0', num_bytes);
		memset(dec, '\0', num_bytes);
		
		free(enc);
		free(dec);

		enc = NULL;
		dec = NULL;
	}
	*/
	
    return 0;
}


void print_hex(const uint8_t * data, const long num_bytes) {
    for(int i=0; i<num_bytes; i++) {
        printf("%02X", data[i]);
    }
}
