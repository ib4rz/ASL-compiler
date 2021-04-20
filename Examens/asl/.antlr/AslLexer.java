// Generated from d:\Usuario\Documentos\Universitat\2020-2021\Q2\CL\Laboratorio\Examens\17abril2020\asl\Asl.g4 by ANTLR 4.8
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class AslLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		ASSIGN=10, ADD=11, SUB=12, MUL=13, DIV=14, MOD=15, SEQ=16, SNEQ=17, SGT=18, 
		SGE=19, SLE=20, SLT=21, AND=22, NOT=23, OR=24, VAR=25, INT=26, BOOL=27, 
		FLOAT=28, CHAR=29, ARRAY=30, PAIR=31, EDNPAIR=32, IF=33, THEN=34, ELSE=35, 
		ENDIF=36, WHILE=37, DO=38, ENDWHILE=39, FOR=40, INRANGE=41, ENDFOR=42, 
		FUNC=43, ENDFUNC=44, RET=45, READ=46, WRITE=47, MAX=48, SUM=49, FILTER=50, 
		INTO=51, USING=52, FIRST=53, SECOND=54, INTVAL=55, BOOLVAL=56, FLOATVAL=57, 
		CHARVAL=58, ID=59, STRING=60, COMMENT=61, WS=62;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"ASSIGN", "ADD", "SUB", "MUL", "DIV", "MOD", "SEQ", "SNEQ", "SGT", "SGE", 
			"SLE", "SLT", "AND", "NOT", "OR", "VAR", "INT", "BOOL", "FLOAT", "CHAR", 
			"ARRAY", "PAIR", "EDNPAIR", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", 
			"ENDWHILE", "FOR", "INRANGE", "ENDFOR", "FUNC", "ENDFUNC", "RET", "READ", 
			"WRITE", "MAX", "SUM", "FILTER", "INTO", "USING", "FIRST", "SECOND", 
			"INTVAL", "BOOLVAL", "FLOATVAL", "CHARVAL", "ID", "STRING", "ESC_SEQ", 
			"COMMENT", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'('", "')'", "':'", "','", "'['", "']'", "'of'", "';'", "'.'", 
			"'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'=='", "'!='", "'>'", "'>='", 
			"'<='", "'<'", "'and'", "'not'", "'or'", "'var'", "'int'", "'bool'", 
			"'float'", "'char'", "'array'", "'pair'", "'endpair'", "'if'", "'then'", 
			"'else'", "'endif'", "'while'", "'do'", "'endwhile'", "'for'", "'in range'", 
			"'endfor'", "'func'", "'endfunc'", "'return'", "'read'", "'write'", "'max'", 
			"'sum'", "'filter'", "'into'", "'using'", "'first'", "'second'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, "ASSIGN", 
			"ADD", "SUB", "MUL", "DIV", "MOD", "SEQ", "SNEQ", "SGT", "SGE", "SLE", 
			"SLT", "AND", "NOT", "OR", "VAR", "INT", "BOOL", "FLOAT", "CHAR", "ARRAY", 
			"PAIR", "EDNPAIR", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", 
			"FOR", "INRANGE", "ENDFOR", "FUNC", "ENDFUNC", "RET", "READ", "WRITE", 
			"MAX", "SUM", "FILTER", "INTO", "USING", "FIRST", "SECOND", "INTVAL", 
			"BOOLVAL", "FLOATVAL", "CHARVAL", "ID", "STRING", "COMMENT", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public AslLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Asl.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2@\u01b2\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b"+
		"\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\17\3\17"+
		"\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\22\3\23\3\23\3\24\3\24\3\24\3\25"+
		"\3\25\3\25\3\26\3\26\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\31\3\31"+
		"\3\31\3\32\3\32\3\32\3\32\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3\34"+
		"\3\35\3\35\3\35\3\35\3\35\3\35\3\36\3\36\3\36\3\36\3\36\3\37\3\37\3\37"+
		"\3\37\3\37\3\37\3 \3 \3 \3 \3 \3!\3!\3!\3!\3!\3!\3!\3!\3\"\3\"\3\"\3#"+
		"\3#\3#\3#\3#\3$\3$\3$\3$\3$\3%\3%\3%\3%\3%\3%\3&\3&\3&\3&\3&\3&\3\'\3"+
		"\'\3\'\3(\3(\3(\3(\3(\3(\3(\3(\3(\3)\3)\3)\3)\3*\3*\3*\3*\3*\3*\3*\3*"+
		"\3*\3+\3+\3+\3+\3+\3+\3+\3,\3,\3,\3,\3,\3-\3-\3-\3-\3-\3-\3-\3-\3.\3."+
		"\3.\3.\3.\3.\3.\3/\3/\3/\3/\3/\3\60\3\60\3\60\3\60\3\60\3\60\3\61\3\61"+
		"\3\61\3\61\3\62\3\62\3\62\3\62\3\63\3\63\3\63\3\63\3\63\3\63\3\63\3\64"+
		"\3\64\3\64\3\64\3\64\3\65\3\65\3\65\3\65\3\65\3\65\3\66\3\66\3\66\3\66"+
		"\3\66\3\66\3\67\3\67\3\67\3\67\3\67\3\67\3\67\38\68\u0167\n8\r8\168\u0168"+
		"\39\39\39\39\39\39\39\39\39\59\u0174\n9\3:\6:\u0177\n:\r:\16:\u0178\3"+
		":\3:\6:\u017d\n:\r:\16:\u017e\3;\3;\3;\5;\u0184\n;\3;\3;\3<\3<\7<\u018a"+
		"\n<\f<\16<\u018d\13<\3=\3=\3=\7=\u0192\n=\f=\16=\u0195\13=\3=\3=\3>\3"+
		">\3>\3?\3?\3?\3?\7?\u01a0\n?\f?\16?\u01a3\13?\3?\5?\u01a6\n?\3?\3?\3?"+
		"\3?\3@\6@\u01ad\n@\r@\16@\u01ae\3@\3@\2\2A\3\3\5\4\7\5\t\6\13\7\r\b\17"+
		"\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+"+
		"\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+"+
		"U,W-Y.[/]\60_\61a\62c\63e\64g\65i\66k\67m8o9q:s;u<w=y>{\2}?\177@\3\2\t"+
		"\4\2))^^\4\2C\\c|\6\2\62;C\\aac|\4\2$$^^\n\2$$))^^ddhhppttvv\4\2\f\f\17"+
		"\17\5\2\13\f\17\17\"\"\2\u01bb\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t"+
		"\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2"+
		"\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2"+
		"\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2"+
		"+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2"+
		"\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2"+
		"C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3"+
		"\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2"+
		"\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3\2\2\2\2g\3\2\2\2\2"+
		"i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2\2\2s\3\2\2\2\2u\3"+
		"\2\2\2\2w\3\2\2\2\2y\3\2\2\2\2}\3\2\2\2\2\177\3\2\2\2\3\u0081\3\2\2\2"+
		"\5\u0083\3\2\2\2\7\u0085\3\2\2\2\t\u0087\3\2\2\2\13\u0089\3\2\2\2\r\u008b"+
		"\3\2\2\2\17\u008d\3\2\2\2\21\u0090\3\2\2\2\23\u0092\3\2\2\2\25\u0094\3"+
		"\2\2\2\27\u0096\3\2\2\2\31\u0098\3\2\2\2\33\u009a\3\2\2\2\35\u009c\3\2"+
		"\2\2\37\u009e\3\2\2\2!\u00a0\3\2\2\2#\u00a3\3\2\2\2%\u00a6\3\2\2\2\'\u00a8"+
		"\3\2\2\2)\u00ab\3\2\2\2+\u00ae\3\2\2\2-\u00b0\3\2\2\2/\u00b4\3\2\2\2\61"+
		"\u00b8\3\2\2\2\63\u00bb\3\2\2\2\65\u00bf\3\2\2\2\67\u00c3\3\2\2\29\u00c8"+
		"\3\2\2\2;\u00ce\3\2\2\2=\u00d3\3\2\2\2?\u00d9\3\2\2\2A\u00de\3\2\2\2C"+
		"\u00e6\3\2\2\2E\u00e9\3\2\2\2G\u00ee\3\2\2\2I\u00f3\3\2\2\2K\u00f9\3\2"+
		"\2\2M\u00ff\3\2\2\2O\u0102\3\2\2\2Q\u010b\3\2\2\2S\u010f\3\2\2\2U\u0118"+
		"\3\2\2\2W\u011f\3\2\2\2Y\u0124\3\2\2\2[\u012c\3\2\2\2]\u0133\3\2\2\2_"+
		"\u0138\3\2\2\2a\u013e\3\2\2\2c\u0142\3\2\2\2e\u0146\3\2\2\2g\u014d\3\2"+
		"\2\2i\u0152\3\2\2\2k\u0158\3\2\2\2m\u015e\3\2\2\2o\u0166\3\2\2\2q\u0173"+
		"\3\2\2\2s\u0176\3\2\2\2u\u0180\3\2\2\2w\u0187\3\2\2\2y\u018e\3\2\2\2{"+
		"\u0198\3\2\2\2}\u019b\3\2\2\2\177\u01ac\3\2\2\2\u0081\u0082\7*\2\2\u0082"+
		"\4\3\2\2\2\u0083\u0084\7+\2\2\u0084\6\3\2\2\2\u0085\u0086\7<\2\2\u0086"+
		"\b\3\2\2\2\u0087\u0088\7.\2\2\u0088\n\3\2\2\2\u0089\u008a\7]\2\2\u008a"+
		"\f\3\2\2\2\u008b\u008c\7_\2\2\u008c\16\3\2\2\2\u008d\u008e\7q\2\2\u008e"+
		"\u008f\7h\2\2\u008f\20\3\2\2\2\u0090\u0091\7=\2\2\u0091\22\3\2\2\2\u0092"+
		"\u0093\7\60\2\2\u0093\24\3\2\2\2\u0094\u0095\7?\2\2\u0095\26\3\2\2\2\u0096"+
		"\u0097\7-\2\2\u0097\30\3\2\2\2\u0098\u0099\7/\2\2\u0099\32\3\2\2\2\u009a"+
		"\u009b\7,\2\2\u009b\34\3\2\2\2\u009c\u009d\7\61\2\2\u009d\36\3\2\2\2\u009e"+
		"\u009f\7\'\2\2\u009f \3\2\2\2\u00a0\u00a1\7?\2\2\u00a1\u00a2\7?\2\2\u00a2"+
		"\"\3\2\2\2\u00a3\u00a4\7#\2\2\u00a4\u00a5\7?\2\2\u00a5$\3\2\2\2\u00a6"+
		"\u00a7\7@\2\2\u00a7&\3\2\2\2\u00a8\u00a9\7@\2\2\u00a9\u00aa\7?\2\2\u00aa"+
		"(\3\2\2\2\u00ab\u00ac\7>\2\2\u00ac\u00ad\7?\2\2\u00ad*\3\2\2\2\u00ae\u00af"+
		"\7>\2\2\u00af,\3\2\2\2\u00b0\u00b1\7c\2\2\u00b1\u00b2\7p\2\2\u00b2\u00b3"+
		"\7f\2\2\u00b3.\3\2\2\2\u00b4\u00b5\7p\2\2\u00b5\u00b6\7q\2\2\u00b6\u00b7"+
		"\7v\2\2\u00b7\60\3\2\2\2\u00b8\u00b9\7q\2\2\u00b9\u00ba\7t\2\2\u00ba\62"+
		"\3\2\2\2\u00bb\u00bc\7x\2\2\u00bc\u00bd\7c\2\2\u00bd\u00be\7t\2\2\u00be"+
		"\64\3\2\2\2\u00bf\u00c0\7k\2\2\u00c0\u00c1\7p\2\2\u00c1\u00c2\7v\2\2\u00c2"+
		"\66\3\2\2\2\u00c3\u00c4\7d\2\2\u00c4\u00c5\7q\2\2\u00c5\u00c6\7q\2\2\u00c6"+
		"\u00c7\7n\2\2\u00c78\3\2\2\2\u00c8\u00c9\7h\2\2\u00c9\u00ca\7n\2\2\u00ca"+
		"\u00cb\7q\2\2\u00cb\u00cc\7c\2\2\u00cc\u00cd\7v\2\2\u00cd:\3\2\2\2\u00ce"+
		"\u00cf\7e\2\2\u00cf\u00d0\7j\2\2\u00d0\u00d1\7c\2\2\u00d1\u00d2\7t\2\2"+
		"\u00d2<\3\2\2\2\u00d3\u00d4\7c\2\2\u00d4\u00d5\7t\2\2\u00d5\u00d6\7t\2"+
		"\2\u00d6\u00d7\7c\2\2\u00d7\u00d8\7{\2\2\u00d8>\3\2\2\2\u00d9\u00da\7"+
		"r\2\2\u00da\u00db\7c\2\2\u00db\u00dc\7k\2\2\u00dc\u00dd\7t\2\2\u00dd@"+
		"\3\2\2\2\u00de\u00df\7g\2\2\u00df\u00e0\7p\2\2\u00e0\u00e1\7f\2\2\u00e1"+
		"\u00e2\7r\2\2\u00e2\u00e3\7c\2\2\u00e3\u00e4\7k\2\2\u00e4\u00e5\7t\2\2"+
		"\u00e5B\3\2\2\2\u00e6\u00e7\7k\2\2\u00e7\u00e8\7h\2\2\u00e8D\3\2\2\2\u00e9"+
		"\u00ea\7v\2\2\u00ea\u00eb\7j\2\2\u00eb\u00ec\7g\2\2\u00ec\u00ed\7p\2\2"+
		"\u00edF\3\2\2\2\u00ee\u00ef\7g\2\2\u00ef\u00f0\7n\2\2\u00f0\u00f1\7u\2"+
		"\2\u00f1\u00f2\7g\2\2\u00f2H\3\2\2\2\u00f3\u00f4\7g\2\2\u00f4\u00f5\7"+
		"p\2\2\u00f5\u00f6\7f\2\2\u00f6\u00f7\7k\2\2\u00f7\u00f8\7h\2\2\u00f8J"+
		"\3\2\2\2\u00f9\u00fa\7y\2\2\u00fa\u00fb\7j\2\2\u00fb\u00fc\7k\2\2\u00fc"+
		"\u00fd\7n\2\2\u00fd\u00fe\7g\2\2\u00feL\3\2\2\2\u00ff\u0100\7f\2\2\u0100"+
		"\u0101\7q\2\2\u0101N\3\2\2\2\u0102\u0103\7g\2\2\u0103\u0104\7p\2\2\u0104"+
		"\u0105\7f\2\2\u0105\u0106\7y\2\2\u0106\u0107\7j\2\2\u0107\u0108\7k\2\2"+
		"\u0108\u0109\7n\2\2\u0109\u010a\7g\2\2\u010aP\3\2\2\2\u010b\u010c\7h\2"+
		"\2\u010c\u010d\7q\2\2\u010d\u010e\7t\2\2\u010eR\3\2\2\2\u010f\u0110\7"+
		"k\2\2\u0110\u0111\7p\2\2\u0111\u0112\7\"\2\2\u0112\u0113\7t\2\2\u0113"+
		"\u0114\7c\2\2\u0114\u0115\7p\2\2\u0115\u0116\7i\2\2\u0116\u0117\7g\2\2"+
		"\u0117T\3\2\2\2\u0118\u0119\7g\2\2\u0119\u011a\7p\2\2\u011a\u011b\7f\2"+
		"\2\u011b\u011c\7h\2\2\u011c\u011d\7q\2\2\u011d\u011e\7t\2\2\u011eV\3\2"+
		"\2\2\u011f\u0120\7h\2\2\u0120\u0121\7w\2\2\u0121\u0122\7p\2\2\u0122\u0123"+
		"\7e\2\2\u0123X\3\2\2\2\u0124\u0125\7g\2\2\u0125\u0126\7p\2\2\u0126\u0127"+
		"\7f\2\2\u0127\u0128\7h\2\2\u0128\u0129\7w\2\2\u0129\u012a\7p\2\2\u012a"+
		"\u012b\7e\2\2\u012bZ\3\2\2\2\u012c\u012d\7t\2\2\u012d\u012e\7g\2\2\u012e"+
		"\u012f\7v\2\2\u012f\u0130\7w\2\2\u0130\u0131\7t\2\2\u0131\u0132\7p\2\2"+
		"\u0132\\\3\2\2\2\u0133\u0134\7t\2\2\u0134\u0135\7g\2\2\u0135\u0136\7c"+
		"\2\2\u0136\u0137\7f\2\2\u0137^\3\2\2\2\u0138\u0139\7y\2\2\u0139\u013a"+
		"\7t\2\2\u013a\u013b\7k\2\2\u013b\u013c\7v\2\2\u013c\u013d\7g\2\2\u013d"+
		"`\3\2\2\2\u013e\u013f\7o\2\2\u013f\u0140\7c\2\2\u0140\u0141\7z\2\2\u0141"+
		"b\3\2\2\2\u0142\u0143\7u\2\2\u0143\u0144\7w\2\2\u0144\u0145\7o\2\2\u0145"+
		"d\3\2\2\2\u0146\u0147\7h\2\2\u0147\u0148\7k\2\2\u0148\u0149\7n\2\2\u0149"+
		"\u014a\7v\2\2\u014a\u014b\7g\2\2\u014b\u014c\7t\2\2\u014cf\3\2\2\2\u014d"+
		"\u014e\7k\2\2\u014e\u014f\7p\2\2\u014f\u0150\7v\2\2\u0150\u0151\7q\2\2"+
		"\u0151h\3\2\2\2\u0152\u0153\7w\2\2\u0153\u0154\7u\2\2\u0154\u0155\7k\2"+
		"\2\u0155\u0156\7p\2\2\u0156\u0157\7i\2\2\u0157j\3\2\2\2\u0158\u0159\7"+
		"h\2\2\u0159\u015a\7k\2\2\u015a\u015b\7t\2\2\u015b\u015c\7u\2\2\u015c\u015d"+
		"\7v\2\2\u015dl\3\2\2\2\u015e\u015f\7u\2\2\u015f\u0160\7g\2\2\u0160\u0161"+
		"\7e\2\2\u0161\u0162\7q\2\2\u0162\u0163\7p\2\2\u0163\u0164\7f\2\2\u0164"+
		"n\3\2\2\2\u0165\u0167\4\62;\2\u0166\u0165\3\2\2\2\u0167\u0168\3\2\2\2"+
		"\u0168\u0166\3\2\2\2\u0168\u0169\3\2\2\2\u0169p\3\2\2\2\u016a\u016b\7"+
		"v\2\2\u016b\u016c\7t\2\2\u016c\u016d\7w\2\2\u016d\u0174\7g\2\2\u016e\u016f"+
		"\7h\2\2\u016f\u0170\7c\2\2\u0170\u0171\7n\2\2\u0171\u0172\7u\2\2\u0172"+
		"\u0174\7g\2\2\u0173\u016a\3\2\2\2\u0173\u016e\3\2\2\2\u0174r\3\2\2\2\u0175"+
		"\u0177\4\62;\2\u0176\u0175\3\2\2\2\u0177\u0178\3\2\2\2\u0178\u0176\3\2"+
		"\2\2\u0178\u0179\3\2\2\2\u0179\u017a\3\2\2\2\u017a\u017c\7\60\2\2\u017b"+
		"\u017d\4\62;\2\u017c\u017b\3\2\2\2\u017d\u017e\3\2\2\2\u017e\u017c\3\2"+
		"\2\2\u017e\u017f\3\2\2\2\u017ft\3\2\2\2\u0180\u0183\7)\2\2\u0181\u0184"+
		"\n\2\2\2\u0182\u0184\5{>\2\u0183\u0181\3\2\2\2\u0183\u0182\3\2\2\2\u0184"+
		"\u0185\3\2\2\2\u0185\u0186\7)\2\2\u0186v\3\2\2\2\u0187\u018b\t\3\2\2\u0188"+
		"\u018a\t\4\2\2\u0189\u0188\3\2\2\2\u018a\u018d\3\2\2\2\u018b\u0189\3\2"+
		"\2\2\u018b\u018c\3\2\2\2\u018cx\3\2\2\2\u018d\u018b\3\2\2\2\u018e\u0193"+
		"\7$\2\2\u018f\u0192\5{>\2\u0190\u0192\n\5\2\2\u0191\u018f\3\2\2\2\u0191"+
		"\u0190\3\2\2\2\u0192\u0195\3\2\2\2\u0193\u0191\3\2\2\2\u0193\u0194\3\2"+
		"\2\2\u0194\u0196\3\2\2\2\u0195\u0193\3\2\2\2\u0196\u0197\7$\2\2\u0197"+
		"z\3\2\2\2\u0198\u0199\7^\2\2\u0199\u019a\t\6\2\2\u019a|\3\2\2\2\u019b"+
		"\u019c\7\61\2\2\u019c\u019d\7\61\2\2\u019d\u01a1\3\2\2\2\u019e\u01a0\n"+
		"\7\2\2\u019f\u019e\3\2\2\2\u01a0\u01a3\3\2\2\2\u01a1\u019f\3\2\2\2\u01a1"+
		"\u01a2\3\2\2\2\u01a2\u01a5\3\2\2\2\u01a3\u01a1\3\2\2\2\u01a4\u01a6\7\17"+
		"\2\2\u01a5\u01a4\3\2\2\2\u01a5\u01a6\3\2\2\2\u01a6\u01a7\3\2\2\2\u01a7"+
		"\u01a8\7\f\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01aa\b?\2\2\u01aa~\3\2\2\2\u01ab"+
		"\u01ad\t\b\2\2\u01ac\u01ab\3\2\2\2\u01ad\u01ae\3\2\2\2\u01ae\u01ac\3\2"+
		"\2\2\u01ae\u01af\3\2\2\2\u01af\u01b0\3\2\2\2\u01b0\u01b1\b@\2\2\u01b1"+
		"\u0080\3\2\2\2\16\2\u0168\u0173\u0178\u017e\u0183\u018b\u0191\u0193\u01a1"+
		"\u01a5\u01ae\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}