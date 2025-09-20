use std::time::SystemTime;
use chrono::{DateTime, Local};

pub fn format_system_time(st: SystemTime) -> String {
    let datetime: DateTime<Local> = st.into(); // convert to chrono
    datetime.format("%Y-%m-%d %H:%M:%S").to_string()
}
