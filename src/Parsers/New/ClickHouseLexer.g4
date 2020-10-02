lexer grammar ClickHouseLexer;

// Interval types

INTERVAL_TYPE: SECOND | MINUTE | HOUR | DAY | WEEK | MONTH | QUARTER | YEAR;

// Keywords
// NOTE: don't forget to add new keywords to the parser rule "keyword"!

ADD: A D D;
AFTER: A F T E R;
ALIAS: A L I A S;
ALL: A L L;
ALTER: A L T E R;
ANALYZE: A N A L Y Z E;
AND: A N D;
ANTI: A N T I;
ANY: A N Y;
ARRAY: A R R A Y;
AS: A S;
ASCENDING: A S C | A S C E N D I N G;
ASOF: A S O F;
ATTACH: A T T A C H;
BETWEEN: B E T W E E N;
BOTH: B O T H;
BY: B Y;
CASE: C A S E;
CAST: C A S T;
CHECK: C H E C K;
CLEAR: C L E A R;
CLUSTER: C L U S T E R;
COLLATE: C O L L A T E;
COLUMN: C O L U M N;
COMMENT: C O M M E N T;
CREATE: C R E A T E;
CROSS: C R O S S;
DATABASE: D A T A B A S E;
DATABASES: D A T A B A S E S;
DAY: D A Y;
DEDUPLICATE: D E D U P L I C A T E;
DEFAULT: D E F A U L T;
DELAY: D E L A Y;
DELETE: D E L E T E;
DESC: D E S C;
DESCENDING: D E S C E N D I N G;
DESCRIBE: D E S C R I B E;
DETACH: D E T A C H;
DISK: D I S K;
DISTINCT: D I S T I N C T;
DISTRIBUTED: D I S T R I B U T E D;
DROP: D R O P;
ELSE: E L S E;
END: E N D;
ENGINE: E N G I N E;
EXISTS: E X I S T S;
EXTRACT: E X T R A C T;
FETCHES: F E T C H E S;
FINAL: F I N A L;
FIRST: F I R S T;
FLUSH: F L U S H;
FOR: F O R;
FORMAT: F O R M A T;
FROM: F R O M;
FULL: F U L L;
FUNCTION: F U N C T I O N;
GLOBAL: G L O B A L;
GRANULARITY: G R A N U L A R I T Y;
GROUP: G R O U P;
HAVING: H A V I N G;
HOUR: H O U R;
ID: I D;
IF: I F;
IN: I N;
INDEX: I N D E X;
INF: I N F | I N F I N I T Y;
INNER: I N N E R;
INSERT: I N S E R T;
INTERVAL: I N T E R V A L;
INTO: I N T O;
IS: I S;
JOIN: J O I N;
KEY: K E Y;
LAST: L A S T;
LEADING: L E A D I N G;
LEFT: L E F T;
LIKE: L I K E;
LIMIT: L I M I T;
LOCAL: L O C A L;
MATERIALIZED: M A T E R I A L I Z E D;
MERGES: M E R G E S;
MINUTE: M I N U T E;
MODIFY: M O D I F Y;
MONTH: M O N T H;
NAN_SQL: N A N; // conflicts with macro NAN
NO: N O;
NOT: N O T;
NULL_SQL: N U L L; // conflicts with macro NULL
NULLS: N U L L S;
OFFSET: O F F S E T;
ON: O N;
OPTIMIZE: O P T I M I Z E;
OR: O R;
ORDER: O R D E R;
OUTER: O U T E R;
OUTFILE: O U T F I L E;
PARTITION: P A R T I T I O N;
POPULATE: P O P U L A T E;
PREWHERE: P R E W H E R E;
PRIMARY: P R I M A R Y;
QUARTER: Q U A R T E R;
RENAME: R E N A M E;
REPLACE: R E P L A C E;
REPLICA: R E P L I C A;
RIGHT: R I G H T;
SAMPLE: S A M P L E;
SECOND: S E C O N D;
SELECT: S E L E C T;
SEMI: S E M I;
SENDS: S E N D S;
SET: S E T;
SETTINGS: S E T T I N G S;
SHOW: S H O W;
START: S T A R T;
STOP: S T O P;
SUBSTRING: S U B S T R I N G;
SYNC: S Y N C;
SYSTEM: S Y S T E M;
TABLE: T A B L E;
TABLES: T A B L E S;
TEMPORARY: T E M P O R A R Y;
THEN: T H E N;
TIES: T I E S;
TO: T O;
TOTALS: T O T A L S;
TRAILING: T R A I L I N G;
TRIM: T R I M;
TRUNCATE: T R U N C A T E;
TTL: T T L;
TYPE: T Y P E;
UNION: U N I O N;
USE: U S E;
USING: U S I N G;
VALUES: V A L U E S;
VIEW: V I E W;
VOLUME: V O L U M E;
WEEK: W E E K;
WHEN: W H E N;
WHERE: W H E R E;
WITH: W I T H;
YEAR: Y E A R | Y Y Y Y;

JSON_FALSE: 'false';
JSON_TRUE: 'true';

// Tokens

IDENTIFIER
    : (LETTER | UNDERSCORE) (LETTER | UNDERSCORE | DEC_DIGIT)*
    | BACKQUOTE ( ~([\\`]) | (BACKSLASH .) )* BACKQUOTE
    | QUOTE_DOUBLE ( ~([\\"]) | (BACKSLASH .) )* QUOTE_DOUBLE
    ;
FLOATING_LITERAL
    : HEXADECIMAL_LITERAL DOT HEX_DIGIT* (P | E) (PLUS | DASH)? DEC_DIGIT+
    | HEXADECIMAL_LITERAL (P | E) (PLUS | DASH)? DEC_DIGIT+
    | INTEGER_LITERAL DOT DEC_DIGIT* E (PLUS | DASH)? DEC_DIGIT+
    | DOT INTEGER_LITERAL E (PLUS | DASH)? DEC_DIGIT+
    | INTEGER_LITERAL E (PLUS | DASH)? DEC_DIGIT+
    ;
HEXADECIMAL_LITERAL: '0' X HEX_DIGIT+;
INTEGER_LITERAL: DEC_DIGIT+;

// It's important that quote-symbol is a single character.
STRING_LITERAL: QUOTE_SINGLE ( ~([\\']) | (BACKSLASH .) | (QUOTE_SINGLE QUOTE_SINGLE) )* QUOTE_SINGLE;

// Alphabet and allowed symbols

fragment A: [aA];
fragment B: [bB];
fragment C: [cC];
fragment D: [dD];
fragment E: [eE];
fragment F: [fF];
fragment G: [gG];
fragment H: [hH];
fragment I: [iI];
fragment J: [jJ];
fragment K: [kK];
fragment L: [lL];
fragment M: [mM];
fragment N: [nN];
fragment O: [oO];
fragment P: [pP];
fragment Q: [qQ];
fragment R: [rR];
fragment S: [sS];
fragment T: [tT];
fragment U: [uU];
fragment V: [vV];
fragment W: [wW];
fragment X: [xX];
fragment Y: [yY];
fragment Z: [zZ];

fragment LETTER: [a-zA-Z];
fragment DEC_DIGIT: [0-9];
fragment HEX_DIGIT: [0-9a-fA-F];

ARROW: '->';
ASTERISK: '*';
BACKQUOTE: '`';
BACKSLASH: '\\';
COLON: ':';
COMMA: ',';
CONCAT: '||';
DASH: '-';
DOT: '.';
EQ_DOUBLE: '==';
EQ_SINGLE: '=';
GE: '>=';
GT: '>';
LBRACE: '{';
LBRACKET: '[';
LE: '<=';
LPAREN: '(';
LT: '<';
NOT_EQ: '!=' | '<>';
PERCENT: '%';
PLUS: '+';
QUERY: '?';
QUOTE_DOUBLE: '"';
QUOTE_SINGLE: '\'';
RBRACE: '}';
RBRACKET: ']';
RPAREN: ')';
SEMICOLON: ';';
SLASH: '/';
UNDERSCORE: '_';

// Comments and whitespace

MULTI_LINE_COMMENT: '/*' .*? '*/' -> skip;
SINGLE_LINE_COMMENT: '--' ~('\n'|'\r')* ('\n' | '\r' | EOF) -> skip;
WHITESPACE: [ \u000B\u000C\t\r\n] -> skip;  // '\n' can be part of multiline single query