#!/usr/bin/perl
use v5.24;

sub valid_group {
    my ($group_string) = @_;
    my @elems = split /\s+/, $group_string;
    my %elems = map { $_, 1 } @elems;
    return keys %elems == 1;
}

while (<>) {
    if ($_ =~ /^([a-zA-Z_\d]+) # test name 
	\s+(\d+) # test number 
	[\s\d]+
	(\(.*\)) #paren groups 
	$/x) {
	my $t_name = $1;
	my $t_num = $2;
	my @paren_groups = $3 =~ /\((.*?)\)/g;
	foreach my $group (@paren_groups) {
	    if (valid_group $group) {
		print "$t_name ($t_num) pass\n";
	    } else {
		print "$t_name ($t_num) FAIL\n";
	    }
	}
    } 
}
