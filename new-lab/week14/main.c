#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct {
	char name[30];
	float price;
	int quantity;
} Item;


void print_item(Item *p) {
	printf("%s: $%.2f, x %d\n",p->name, p->price, p->quantity);
}

void print_inventory(Item *first, Item *last) {
	while (first <= last) {
		print_item(first);
		first++;
	}
}

void copy_name(char *dest, const char *src) {
	while(*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}
}

void example1_item_basics() {
	Item a = { "Pencil", 1.50, 200 };
	Item b;
	copy_name( b.name, "Eraser" );
	b.price = 0.75;
	b.quantity = 350;
	print_item(&a);
	print_item(&b);
}


void init_item( Item *p, char *name, double price, int qty ){
	p->price = price;
	p->quantity = qty;
	copy_name(p->name, name);
}

void example6_broken_init_item() {
	Item x;
	init_item( &x, "Highlighter", 3.25, 80 );
	print_item( &x );
}


double total_value_broken( Item *first, Item *last ){
	double total = 0;
	Item *p;
	for( p = first; p < last; p++ )
	total += p->price;
	return total;
}

void example7_broken_total_value() {
	Item stock[2] = {
		{ "Book", 25.00, 10 },
		{ "Lamp", 40.00, 5 }
};
	printf( "total value: $%.2f\n", total_value_broken( stock, stock + 2 ) );
}


Item *cheapest_broken( Item *first, Item *last ){
	Item *best = first, *p;
	for( p = first + 1; p < last; p++ )
	if( p->price < best->price ) best = p;
		return best;
}

void example8_broken_cheapest() {
	Item stock[3] = {
		{ "Brush", 6.50, 40 },
		{ "Canvas", 18.00, 20 },
		{ "Paint", 4.25, 90 }
};
	Item *c = cheapest_broken( stock, stock + 3 );
	printf( "cheapest: %s ($%.2f)\n", c->name, c->price );
}



void restock_broken( Item *first, Item *last, int amount ){
	Item *p;
	for( p = first; p <= last; p++ )
	p->quantity = amount;
}

void example9_broken_restock() {
	Item stock[2] = {
		{ "Ink", 5.00, 30 },
		{ "Paper", 10.00, 50 }
};
	printf( "before:\n" );
	print_inventory( stock, stock + 2 );
	restock_broken( stock, stock + 2, 20 );
	printf( "after restock +20:\n" );
	print_inventory( stock, stock + 2 );
}





int remove_item_broken( Item items[], int size, int idx ){
	int i;
	for( i = idx; i < size - 1; i++ )
	items[ i + 1 ] = items[ i ];
	return size - 1;
}

void example10_broken_remove_item() {
	Item stock[4] = {
		{ "A", 1.00, 10 },
		{ "B", 2.00, 20 },
		{ "C", 3.00, 30 },
		{ "D", 4.00, 40 }
};
	int size = 4;
	printf( "before:\n" );
	print_inventory( stock, stock + size );
	size = remove_item_broken( stock, size, 1 );
	printf( "after removing index 1:\n" );
	print_inventory( stock, stock + size );
}



int main(int argc, char *argv[]) {
	
	
	
	example1_item_basics();
	example6_broken_init_item();
	example7_broken_total_value();
	example8_broken_cheapest();
	example9_broken_restock();
	example10_broken_remove_item();

	return 0;
}




