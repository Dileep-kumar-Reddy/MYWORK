class item:
    all_instances=[]
    pay_rate=0.8
    def __init__(self,name,price,quantity):
        self.name=name
        self.price=price
        self.quantity=quantity
        item.all_instances.append(self)
    def calculate_total_price(self):
        return self.price*self.quantity
    def apply_discount(self):
        return self.price*self.pay_rate
    def __repr__(self):
        return f'{self.name}({self.quantity},{self.price})'
    def read_only_name(self):
        return "AAA"
class phone(item):
    all_phone=[]
    def __init__(self, name, price, quantity,battery_capacity=2500):
        super().__init__(name, price, quantity)
        phone.all_phone.append(self)
        self.battery_capacity=battery_capacity
redmi_k_20=phone("K_20",20000,3,5000)
print(redmi_k_20.__dict__)
print(item.all_instances)
print(phone.all_phone)
redmi_k_20.read_only_name="aaa"
print(redmi_k_20.read_only_name())
