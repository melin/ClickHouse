
// Generated from ClickHouseLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace DB {


class  ClickHouseLexer : public antlr4::Lexer {
public:
  enum {
    INTERVAL_TYPE = 1, ADD = 2, AFTER = 3, ALIAS = 4, ALL = 5, ALTER = 6, 
    ANALYZE = 7, AND = 8, ANTI = 9, ANY = 10, ARRAY = 11, AS = 12, ASCENDING = 13, 
    ASOF = 14, ATTACH = 15, BETWEEN = 16, BOTH = 17, BY = 18, CASE = 19, 
    CAST = 20, CHECK = 21, CLEAR = 22, CLUSTER = 23, COLLATE = 24, COLUMN = 25, 
    COMMENT = 26, CREATE = 27, CROSS = 28, DATABASE = 29, DAY = 30, DEDUPLICATE = 31, 
    DEFAULT = 32, DELAY = 33, DELETE = 34, DESC = 35, DESCENDING = 36, DESCRIBE = 37, 
    DETACH = 38, DISK = 39, DISTINCT = 40, DROP = 41, ELSE = 42, END = 43, 
    ENGINE = 44, EXISTS = 45, EXTRACT = 46, FINAL = 47, FIRST = 48, FORMAT = 49, 
    FROM = 50, FULL = 51, FUNCTION = 52, GLOBAL = 53, GROUP = 54, HAVING = 55, 
    HOUR = 56, ID = 57, IF = 58, IN = 59, INF = 60, INNER = 61, INSERT = 62, 
    INTERVAL = 63, INTO = 64, IS = 65, JOIN = 66, KEY = 67, LAST = 68, LEADING = 69, 
    LEFT = 70, LIKE = 71, LIMIT = 72, LOCAL = 73, MATERIALIZED = 74, MINUTE = 75, 
    MODIFY = 76, MONTH = 77, NAN_SQL = 78, NO = 79, NOT = 80, NULL_SQL = 81, 
    NULLS = 82, OFFSET = 83, ON = 84, OPTIMIZE = 85, OR = 86, ORDER = 87, 
    OUTER = 88, OUTFILE = 89, PARTITION = 90, POPULATE = 91, PREWHERE = 92, 
    PRIMARY = 93, QUARTER = 94, RENAME = 95, REPLICA = 96, RIGHT = 97, SAMPLE = 98, 
    SECOND = 99, SELECT = 100, SEMI = 101, SET = 102, SETTINGS = 103, SHOW = 104, 
    SYNC = 105, SYSTEM = 106, TABLE = 107, TABLES = 108, TEMPORARY = 109, 
    THEN = 110, TIES = 111, TO = 112, TOTALS = 113, TRAILING = 114, TRIM = 115, 
    TRUNCATE = 116, TTL = 117, UNION = 118, USE = 119, USING = 120, VALUES = 121, 
    VIEW = 122, VOLUME = 123, WEEK = 124, WHEN = 125, WHERE = 126, WITH = 127, 
    YEAR = 128, IDENTIFIER = 129, FLOATING_LITERAL = 130, HEXADECIMAL_LITERAL = 131, 
    INTEGER_LITERAL = 132, STRING_LITERAL = 133, ARROW = 134, ASTERISK = 135, 
    BACKQUOTE = 136, BACKSLASH = 137, COLON = 138, COMMA = 139, CONCAT = 140, 
    DASH = 141, DOT = 142, EQ_DOUBLE = 143, EQ_SINGLE = 144, GE = 145, GT = 146, 
    LBRACKET = 147, LE = 148, LPAREN = 149, LT = 150, NOT_EQ = 151, PERCENT = 152, 
    PLUS = 153, QUERY = 154, QUOTE_DOUBLE = 155, QUOTE_SINGLE = 156, RBRACKET = 157, 
    RPAREN = 158, SEMICOLON = 159, SLASH = 160, UNDERSCORE = 161, SINGLE_LINE_COMMENT = 162, 
    MULTI_LINE_COMMENT = 163, WHITESPACE = 164
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
