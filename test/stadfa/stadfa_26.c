/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy3;
	default:
		YYMTAGP(yyt2);
		YYMTAGP(yyt2);
		goto yy2;
	}
yy2:
	t = yyt2;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = yyt2;
	YYMTAGP(yyt1);
	YYSHIFTMTAG(yyt1, -1);
	YYMTAGP(yyt2);
	YYSHIFTMTAG(yyt2, -1);
	switch (yych) {
	case 'b':	goto yy4;
	default:
		YYMTAGP(yyt2);
		goto yy2;
	}
yy4:
	++YYCURSOR;
	yyt2 = yyt1;
	YYMTAGP(yyt2);
	YYSHIFTMTAG(yyt2, -1);
	goto yy2;
}

stadfa/stadfa_26.re:3:13: warning: rule matches empty string [-Wmatch-empty-string]
stadfa/stadfa_26.re:4:3: warning: rule matches empty string [-Wmatch-empty-string]
stadfa/stadfa_26.re:4:3: warning: unreachable rule (shadowed by rule at line 3) [-Wunreachable-rules]
