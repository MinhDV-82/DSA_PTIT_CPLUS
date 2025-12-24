import random

class LinkedAllocation:
    def __init__(self, free_blocks):
        self.free_blocks = free_blocks.copy()
        self.files = {}
    
    def create_file(self, filename, n_blocks):
        if len(self.free_blocks) < n_blocks:
            print(f"Lỗi: Không đủ block trống! Cần {n_blocks}, có {len(self.free_blocks)}")
            return False
        
        allocated_blocks = random.sample(self.free_blocks, n_blocks)
        
        linked_list = []
        for i in range(len(allocated_blocks)):
            current_block = allocated_blocks[i]
            next_block = allocated_blocks[i + 1] if i < len(allocated_blocks) - 1 else None
            linked_list.append((current_block, next_block))
            self.free_blocks.remove(current_block)
        
        self.files[filename] = linked_list
        print(f"Tạo file '{filename}' thành công (Linked Allocation)")
        print(f"  Block đầu: {linked_list[0][0]}")
        self._display_chain(filename)
        return True
    
    def read_file(self, filename):
        if filename not in self.files:
            print(f"Lỗi: File '{filename}' không tồn tại!")
            return None
        
        print(f"Đọc file '{filename}':")
        self._display_chain(filename)
        return [block for block, _ in self.files[filename]]
    
    def delete_file(self, filename):
        if filename not in self.files:
            print(f"Lỗi: File '{filename}' không tồn tại!")
            return False
        
        for block, _ in self.files[filename]:
            self.free_blocks.append(block)
        
        self.free_blocks.sort()
        del self.files[filename]
        print(f"Xóa file '{filename}' thành công")
        return True
    
    def _display_chain(self, filename):
        chain = []
        for block, next_block in self.files[filename]:
            if next_block is not None:
                chain.append(f"{block}->")
            else:
                chain.append(f"{block}->NULL")
        print(f"  Chuỗi block: {''.join(chain)}")

class IndexedAllocation:
    def __init__(self, free_blocks):
        self.free_blocks = free_blocks.copy()
        self.files = {}
    
    def create_file(self, filename, n_blocks):
        if len(self.free_blocks) < n_blocks + 1:
            print(f"Lỗi: Không đủ block trống! Cần {n_blocks + 1}, có {len(self.free_blocks)}")
            return False
        
        index_block = random.choice(self.free_blocks)
        self.free_blocks.remove(index_block)
        
        data_blocks = random.sample(self.free_blocks, n_blocks)
        for block in data_blocks:
            self.free_blocks.remove(block)
        
        data_blocks.sort()
        self.files[filename] = {
            'index_block': index_block,
            'data_blocks': data_blocks
        }
        
        print(f"Tạo file '{filename}' thành công (Indexed Allocation)")
        print(f"  Block chỉ mục: {index_block}")
        print(f"  Block dữ liệu: {data_blocks}")
        return True
    
    def read_file(self, filename):
        if filename not in self.files:
            print(f"Lỗi: File '{filename}' không tồn tại!")
            return None
        
        file_info = self.files[filename]
        print(f"Đọc file '{filename}':")
        print(f"  Block chỉ mục: {file_info['index_block']}")
        print(f"  Block dữ liệu: {file_info['data_blocks']}")
        return file_info['data_blocks']
    
    def delete_file(self, filename):
        if filename not in self.files:
            print(f"Lỗi: File '{filename}' không tồn tại!")
            return False
        
        self.free_blocks.append(self.files[filename]['index_block'])
        
        for block in self.files[filename]['data_blocks']:
            self.free_blocks.append(block)
        
        self.free_blocks.sort()
        del self.files[filename]
        print(f"Xóa file '{filename}' thành công")
        return True


print("=== MÔ PHỎNG PHÂN PHỐI TỆP TIN ===\n")

# Demo Linked Allocation
print("--- LINKED ALLOCATION ---")
free_blocks = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
print(f"Block trống ban đầu: {free_blocks}\n")

linked = LinkedAllocation(free_blocks)

linked.create_file("file1.txt", 4)
print(f"Block trống còn lại: {linked.free_blocks}\n")

linked.create_file("file2.txt", 3)
print(f"Block trống còn lại: {linked.free_blocks}\n")

linked.read_file("file1.txt")
print()

linked.delete_file("file1.txt")
print(f"Block trống sau khi xóa: {linked.free_blocks}\n")

# Demo Indexed Allocation
print("\n--- INDEXED ALLOCATION ---")
free_blocks = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
print(f"Block trống ban đầu: {free_blocks}\n")

indexed = IndexedAllocation(free_blocks)

indexed.create_file("fileA.txt", 4)
print(f"Block trống còn lại: {indexed.free_blocks}\n")

indexed.create_file("fileB.txt", 2)
print(f"Block trống còn lại: {indexed.free_blocks}\n")

indexed.read_file("fileA.txt")
print()

indexed.delete_file("fileA.txt")
print(f"Block trống sau khi xóa: {indexed.free_blocks}")
