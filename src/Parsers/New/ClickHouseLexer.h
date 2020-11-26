
// Generated from ClickHouseLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace DB {


class  ClickHouseLexer : public antlr4::Lexer {
public:
  enum {
    ADD = 1, AFTER = 2, ALIAS = 3, ALL = 4, ALTER = 5, AND = 6, ANTI = 7, 
    ANY = 8, ARRAY = 9, AS = 10, ASCENDING = 11, ASOF = 12, ATTACH = 13, 
    BETWEEN = 14, BOTH = 15, BY = 16, CASE = 17, CAST = 18, CHECK = 19, 
    CLEAR = 20, CLUSTER = 21, CODEC = 22, COLLATE = 23, COLUMN = 24, COMMENT = 25, 
    CONSTRAINT = 26, CREATE = 27, CROSS = 28, CUBE = 29, DATABASE = 30, 
    DATABASES = 31, DATE = 32, DAY = 33, DEDUPLICATE = 34, DEFAULT = 35, 
    DELAY = 36, DELETE = 37, DESC = 38, DESCENDING = 39, DESCRIBE = 40, 
    DETACH = 41, DISK = 42, DISTINCT = 43, DISTRIBUTED = 44, DROP = 45, 
    ELSE = 46, END = 47, ENGINE = 48, EXISTS = 49, EXPLAIN = 50, EXTRACT = 51, 
    FETCHES = 52, FINAL = 53, FIRST = 54, FLUSH = 55, FOR = 56, FORMAT = 57, 
    FROM = 58, FULL = 59, FUNCTION = 60, GLOBAL = 61, GRANULARITY = 62, 
    GROUP = 63, HAVING = 64, HOUR = 65, ID = 66, IF = 67, ILIKE = 68, IN = 69, 
    INDEX = 70, INF = 71, INNER = 72, INSERT = 73, INTERVAL = 74, INTO = 75, 
    IS = 76, JOIN = 77, KEY = 78, LAST = 79, LEADING = 80, LEFT = 81, LIKE = 82, 
    LIMIT = 83, LIVE = 84, LOCAL = 85, LOGS = 86, MATERIALIZED = 87, MERGES = 88, 
    MINUTE = 89, MODIFY = 90, MONTH = 91, NAN_SQL = 92, NO = 93, NOT = 94, 
    NULL_SQL = 95, NULLS = 96, OFFSET = 97, ON = 98, OPTIMIZE = 99, OR = 100, 
    ORDER = 101, OUTER = 102, OUTFILE = 103, PARTITION = 104, POPULATE = 105, 
    PREWHERE = 106, PRIMARY = 107, QUARTER = 108, REMOVE = 109, RENAME = 110, 
    REPLACE = 111, REPLICA = 112, REPLICATED = 113, RIGHT = 114, ROLLUP = 115, 
    SAMPLE = 116, SECOND = 117, SELECT = 118, SEMI = 119, SENDS = 120, SET = 121, 
    SETTINGS = 122, SHOW = 123, START = 124, STOP = 125, SUBSTRING = 126, 
    SYNC = 127, SYNTAX = 128, SYSTEM = 129, TABLE = 130, TABLES = 131, TEMPORARY = 132, 
    THEN = 133, TIES = 134, TIMEOUT = 135, TIMESTAMP = 136, TO = 137, TOTALS = 138, 
    TRAILING = 139, TRIM = 140, TRUNCATE = 141, TTL = 142, TYPE = 143, UNION = 144, 
    UPDATE = 145, USE = 146, USING = 147, UUID = 148, VALUES = 149, VIEW = 150, 
    VOLUME = 151, WEEK = 152, WHEN = 153, WHERE = 154, WITH = 155, YEAR = 156, 
    JSON_FALSE = 157, JSON_TRUE = 158, IDENTIFIER = 159, FLOATING_LITERAL = 160, 
    OCTAL_LITERAL = 161, DECIMAL_LITERAL = 162, HEXADECIMAL_LITERAL = 163, 
    STRING_LITERAL = 164, ARROW = 165, ASTERISK = 166, BACKQUOTE = 167, 
    BACKSLASH = 168, COLON = 169, COMMA = 170, CONCAT = 171, DASH = 172, 
    DOT = 173, EQ_DOUBLE = 174, EQ_SINGLE = 175, GE = 176, GT = 177, LBRACE = 178, 
    LBRACKET = 179, LE = 180, LPAREN = 181, LT = 182, NOT_EQ = 183, PERCENT = 184, 
    PLUS = 185, QUERY = 186, QUOTE_DOUBLE = 187, QUOTE_SINGLE = 188, RBRACE = 189, 
    RBRACKET = 190, RPAREN = 191, SEMICOLON = 192, SLASH = 193, UNDERSCORE = 194, 
    MULTI_LINE_COMMENT = 195, SINGLE_LINE_COMMENT = 196, WHITESPACE = 197
  };

  ClickHouseLexer(antlr4::CharStream *input);
  ~ClickHouseLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace DB
