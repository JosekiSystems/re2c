/* Generated by re2c */

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = yyt2 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt1 = yyt2 = YYCURSOR;
		goto yy6;
	case 'c':
		yyt1 = yyt2 = YYCURSOR;
		goto yy8;
	default:	goto yy2;
	}
yy2:
	{
		const size_t yynmatch = 1;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = YYCURSOR;
		yypmatch[1] = YYCURSOR;
		{}
	}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt4 = YYCURSOR;
		goto yy10;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy8;
	case 'd':
		yyt4 = YYCURSOR;
		goto yy11;
	default:
		yyt3 = yyt1;
		yyt4 = YYCURSOR;
		goto yy5;
	}
yy5:
	{
		const size_t yynmatch = 3;
		const YYCTYPE *yypmatch[yynmatch * 2];
		yypmatch[0] = yyt2;
		yypmatch[4] = yyt4;
		yypmatch[1] = YYCURSOR;
		yypmatch[2] = yyt3;
		yypmatch[3] = yyt4;
		yypmatch[5] = YYCURSOR;
		{}
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy13;
	default:	goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0: 	goto yy2;
	case 1: 
		yyt4 = YYCURSOR;
		goto yy5;
	default:
		yyt3 = yyt4;
		yyt4 = YYCURSOR;
		goto yy5;
	}
yy8:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt3 = yyt1;
		yyt1 = YYCURSOR;
		goto yy6;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy8;
	case 'd':
		yyt4 = YYCURSOR;
		goto yy11;
	default:
		yyt3 = yyt1;
		yyt4 = YYCURSOR;
		goto yy5;
	}
yy10:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt3 = yyt1;
		yyt1 = YYCURSOR;
		goto yy6;
	case 'c':
		yyt3 = YYCURSOR;
		goto yy14;
	case 'd':
		yyt4 = YYCURSOR;
		goto yy11;
	default:
		yyt3 = yyt1;
		yyt4 = YYCURSOR;
		goto yy5;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy11;
	default:
		yyt3 = yyt1;
		goto yy5;
	}
yy13:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy8;
	default:	goto yy7;
	}
yy14:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy6;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy8;
	case 'd':	goto yy15;
	default:
		yyt4 = YYCURSOR;
		goto yy5;
	}
yy15:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt1 = YYCURSOR;
		goto yy6;
	case 'c':
		yyt1 = YYCURSOR;
		goto yy8;
	case 'd':
		yyt1 = yyt4;
		yyt4 = YYCURSOR;
		goto yy11;
	default:
		yyt3 = yyt4;
		yyt4 = YYCURSOR;
		goto yy5;
	}
}

re2c: warning: line 6: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 5: trailing context is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]