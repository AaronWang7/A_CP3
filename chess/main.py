# Import classes from classes.py
from classes import ChessGame

def main():
    movement = input(":")
    # Create chess game
    game = ChessGame()
    
    print("=== INITIAL POSITIONS ===")
    # Display initial positions as in example
    white_knight = game.get_piece_at("B1")
    black_pawn = game.get_piece_at("D7") 
    white_pawn = game.get_piece_at("D2")
    black_bishop = game.get_piece_at("C8")
    white_rook = game.get_piece_at("A1")
    
    # Prints out positions before any moves
    print(game.get_piece_info(white_knight))
    print(game.get_piece_info(black_pawn))
    print(game.get_piece_info(white_pawn))
    print(game.get_piece_info(black_bishop))
    print(game.get_piece_info(white_rook))
    
    moves = [
        (white_knight, "C3"),  # White Knight B1 to C3
        (black_pawn, "D5"),    # Black Pawn D7 to D5  
        (white_pawn, "D3"),    # White Pawn D2 to D3
        (black_bishop, "F5"),  # Black Bishop C8 to F5
        (white_rook, "A4")     # White Rook A1 to A4 (should fail)
    ]
    
    # Moving check
    for piece, new_pos in moves:
        success = game.move_piece(piece, new_pos)
        f"{piece.get_color()} {type(piece).__name__} from {piece.get_position()} to {new_pos}: {'SUCCESS' if success else 'FAILED'}"
    
    print("\n***After moves***")
    # Display final positions, after moves
    print(game.get_piece_info(white_knight))
    print(game.get_piece_info(black_pawn))
    print(game.get_piece_info(white_pawn))
    print(game.get_piece_info(black_bishop))
    print("White Rook 1 cannot move to A4")
    
    # Prints out how many pieces are left
    print(f"\nWhite pieces left: {game.get_pieces_left('White')}")
    print(f"Black pieces left: {game.get_pieces_left('Black')}")

if __name__ == "__main__":
    main()
    
