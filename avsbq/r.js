async function fetchPaths(){const t=await fetch("http://avsbq.org/s.json");return await t.json()}async function goToRandomPage(){const t=(await fetchPaths()).filter((t=>!t.includes("."))),a=t[Math.floor(Math.random()*t.length)];window.location.assign(`http://avsbq.org/${a}`)}