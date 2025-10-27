# Import abstract base class
from abc import ABC, abstractmethod

# Class called ChessPiece
class ChessPiece(ABC):
    def __init__(self, color, position):
        self.color = color
        self.position = position
    
    # abstractmethod
    @abstractmethod
    def can_move_to(self, new_pos):
        pass
    
    @abstractmethod
    def get_symbol(self):
        pass
    
    def get_color(self):
        return self.color
    
    def get_position(self):
        return self.position
    
    def set_position(self, new_pos):
        self.position = new_pos

# Class called Pawn(Child calss of ChessPiece)
class Pawn(ChessPiece):
    def can_move_to(self, new_pos):
        # Basic pawn movement logic
        current_file, current_rank = self.position[0], int(self.position[1])
        new_file, new_rank = new_pos[0], int(new_pos[1])
        
        if self.color == "White":
            # White pawns move up the board (increasing rank)
            return (new_file == current_file and new_rank == current_rank + 1)
        else:
            # Black pawns move down the board (decreasing rank)
            return (new_file == current_file and new_rank == current_rank - 1)
    
    # Gets symbol 
    def get_symbol(self):
        return "P" if self.color == "White" else "p"

# Class called Rook(Child calss of ChessPiece)
class Rook(ChessPiece):
    def can_move_to(self, new_pos):
        # Rook moves horizontally or vertically
        current_file, current_rank = self.position[0], self.position[1]
        new_file, new_rank = new_pos[0], new_pos[1]
        return (current_file == new_file or current_rank == new_rank)
    
    def get_symbol(self):
        return "R" if self.color == "White" else "r"

# Class called Knight(Child calss of ChessPiece)
class Knight(ChessPiece):
    def can_move_to(self, new_pos):
        # Knight moves in L-shape
        file_diff = abs(ord(self.position[0]) - ord(new_pos[0]))
        rank_diff = abs(int(self.position[1]) - int(new_pos[1]))
        return (file_diff == 1 and rank_diff == 2) or (file_diff == 2 and rank_diff == 1)
    
    def get_symbol(self):
        return "N" if self.color == "White" else "n"

# Class called Bishop(Child calss of ChessPiece)
class Bishop(ChessPiece):
    def can_move_to(self, new_pos):
        # Bishop moves diagonally
        file_diff = abs(ord(self.position[0]) - ord(new_pos[0]))
        rank_diff = abs(int(self.position[1]) - int(new_pos[1]))
        return file_diff == rank_diff
    
    def get_symbol(self):
        return "B" if self.color == "White" else "b"

# Class called Queen(Child calss of ChessPiece)
class Queen(ChessPiece):
    def can_move_to(self, new_pos):
        # Queen moves like rook or bishop
        file_diff = abs(ord(self.position[0]) - ord(new_pos[0]))
        rank_diff = abs(int(self.position[1]) - int(new_pos[1]))
        return (self.position[0] == new_pos[0] or 
                self.position[1] == new_pos[1] or 
                file_diff == rank_diff)
    
    def get_symbol(self):
        return "Q" if self.color == "White" else "q"

# Class called King(Child calss of ChessPiece)
class King(ChessPiece):
    def can_move_to(self, new_pos):
        # King moves one square in any direction
        file_diff = abs(ord(self.position[0]) - ord(new_pos[0]))
        rank_diff = abs(int(self.position[1]) - int(new_pos[1]))
        return file_diff <= 1 and rank_diff <= 1
    
    def get_symbol(self):
        return "K" if self.color == "White" else "k"

# Class called ChessGame
class ChessGame:
    # Basic set up for white pieces and black pieces
    def __init__(self):
        self.white_pieces = []
        self.black_pieces = []
        self.setup_pieces()
    
    def setup_pieces(self):
        # Create white pieces
        self.white_pieces.extend([
            Rook("White", "A1"), Knight("White", "B1"), Bishop("White", "C1"), 
            Queen("White", "D1"), King("White", "E1"), Bishop("White", "F1"), 
            Knight("White", "G1"), Rook("White", "H1")
        ])
        for file in "ABCDEFGH":
            self.white_pieces.append(Pawn("White", f"{file}2"))
        
        # Create black pieces  
        self.black_pieces.extend([
            Rook("Black", "A8"), Knight("Black", "B8"), Bishop("Black", "C8"),
            Queen("Black", "D8"), King("Black", "E8"), Bishop("Black", "F8"),
            Knight("Black", "G8"), Rook("Black", "H8")
        ])
        for file in "ABCDEFGH":
            self.black_pieces.append(Pawn("Black", f"{file}7"))
    
    def move_piece(self, piece, new_pos):
        if piece.can_move_to(new_pos):
            old_pos = piece.get_position()
            piece.set_position(new_pos)
            return True
        return False
    
    def remove_piece(self, piece):
        if piece in self.white_pieces:
            self.white_pieces.remove(piece)
        elif piece in self.black_pieces:
            self.black_pieces.remove(piece)
    
    def get_pieces_left(self, color):
        return len(self.white_pieces) if color == "White" else len(self.black_pieces)
    
    def get_piece_at(self, position):
        for piece in self.white_pieces + self.black_pieces:
            if piece.get_position() == position:
                return piece
        return None
    
    def get_piece_info(self, piece):
        if not piece:
            return "No piece"
        
        # Count pieces of same type for numbering
        pieces_list = self.white_pieces if piece.get_color() == "White" else self.black_pieces
        same_type = [p for p in pieces_list if type(p).__name__ == type(piece).__name__]
        count = same_type.index(piece) + 1
        
        return f"{piece.get_color()} {type(piece).__name__} {count}, Symbol {piece.get_symbol()} is at {piece.get_position()}"
