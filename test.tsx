import React, { useState } from 'react';
import { ChevronLeft, ChevronRight, CheckCircle2, AlertCircle } from 'lucide-react';

const IntegrationSlides = () => {
  const [currentSlide, setCurrentSlide] = useState(0);

const slides = [
{
      title: "Customer Master Data Management (C-MDM)",
      subtitle: "Single Customer View Strategy",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-indigo-500 to-purple-500 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">360° Customer View</h3>
            <p className="text-sm text-center">Tích hợp và quản lý dữ liệu khách hàng từ tất cả các kênh</p>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="bg-blue-50 p-4 rounded-lg border-2 border-blue-300">
              <h4 className="font-bold text-blue-800 mb-3">Data Sources</h4>
              <div className="space-y-2">
                <div className="bg-white p-2 rounded shadow-sm text-sm">
                  <p className="font-semibold">🌐 E-commerce Platform</p>
                  <p className="text-xs text-gray-600">Browsing behavior, purchase history</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm text-sm">
                  <p className="font-semibold">🏪 POS System (Offline)</p>
                  <p className="text-xs text-gray-600">In-store purchases, interactions</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm text-sm">
                  <p className="font-semibold">📱 Mobile App</p>
                  <p className="text-xs text-gray-600">App usage, preferences, location</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm text-sm">
                  <p className="font-semibold">💬 Customer Service</p>
                  <p className="text-xs text-gray-600">Support tickets, feedback, reviews</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm text-sm">
                  <p className="font-semibold">📧 Marketing Automation</p>
                  <p className="text-xs text-gray-600">Email engagement, campaign responses</p>
                </div>
              </div>
            </div>

            <div className="bg-purple-50 p-4 rounded-lg border-2 border-purple-300">
              <h4 className="font-bold text-purple-800 mb-3">Master Data Attributes</h4>
              <div className="space-y-3 text-sm">
                <div>
                  <p className="font-semibold text-gray-800">Identity & Profile</p>
                  <p className="text-xs text-gray-600">CustomerID, Name, Email, Phone, Address</p>
                </div>
                <div>
                  <p className="font-semibold text-gray-800">Preferences</p>
                  <p className="text-xs text-gray-600">Size, Style, Color, Brand preferences</p>
                </div>
                <div>
                  <p className="font-semibold text-gray-800">Transaction History</p>
                  <p className="text-xs text-gray-600">Orders, Returns, Lifetime value</p>
                </div>
                <div>
                  <p className="font-semibold text-gray-800">Behavioral Data</p>
                  <p className="text-xs text-gray-600">Product views, Cart abandonment, Search</p>
                </div>
                <div>
                  <p className="font-semibold text-gray-800">Engagement</p>
                  <p className="text-xs text-gray-600">Loyalty status, Points, Tier level</p>
                </div>
                <div>
                  <p className="font-semibold text-gray-800">Consent & Privacy</p>
                  <p className="text-xs text-gray-600">Marketing opt-in, Data sharing preferences</p>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-200">
            <h4 className="font-bold text-gray-800 mb-3">C-MDM Integration Flow</h4>
            <div className="flex items-center justify-between text-sm">
              <div className="text-center">
                <div className="bg-blue-100 p-3 rounded-lg mb-2">
                  <p className="font-semibold text-blue-800">Source Systems</p>
                </div>
                <p className="text-xs text-gray-600">Multiple touchpoints</p>
              </div>
              <div className="text-2xl text-gray-400">→</div>
              <div className="text-center">
                <div className="bg-green-100 p-3 rounded-lg mb-2">
                  <p className="font-semibold text-green-800">Data Integration Layer</p>
                </div>
                <p className="text-xs text-gray-600">ETL/CDC processes</p>
              </div>
              <div className="text-2xl text-gray-400">→</div>
              <div className="text-center">
                <div className="bg-purple-100 p-3 rounded-lg mb-2">
                  <p className="font-semibold text-purple-800">MDM Hub</p>
                </div>
                <p className="text-xs text-gray-600">Golden record</p>
              </div>
              <div className="text-2xl text-gray-400">→</div>
              <div className="text-center">
                <div className="bg-orange-100 p-3 rounded-lg mb-2">
                  <p className="font-semibold text-orange-800">Consuming Apps</p>
                </div>
                <p className="text-xs text-gray-600">CRM, Marketing, BI</p>
              </div>
            </div>
          </div>

          <div className="bg-green-50 border-l-4 border-green-500 p-3">
            <p className="text-sm text-gray-700">
              <span className="font-semibold">C-MDM Benefits:</span> Personalization, Better targeting, 
              Reduced data silos, Improved customer experience, GDPR compliance
            </p>
          </div>
        </div>
      )
    },
    {
      title: "API Design & Standards",
      subtitle: "RESTful API Best Practices cho Coolmate",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-blue-500 to-cyan-500 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">API-First Design Approach</h3>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="bg-blue-50 p-4 rounded-lg border-2 border-blue-300">
              <h4 className="font-bold text-blue-800 mb-3">API Versioning Strategy</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">URL Path Versioning</p>
                  <code className="text-xs text-blue-600 block mt-1">
                    api.coolmate.me/v1/products<br/>
                    api.coolmate.me/v2/products
                  </code>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">Backward Compatibility</p>
                  <p className="text-xs text-gray-600 mt-1">Maintain v1 khi release v2</p>
                  <p className="text-xs text-gray-600">Deprecation period: 6 months</p>
                </div>
              </div>
            </div>

            <div className="bg-green-50 p-4 rounded-lg border-2 border-green-300">
              <h4 className="font-bold text-green-800 mb-3">API Documentation</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">OpenAPI Specification (Swagger)</p>
                  <p className="text-xs text-gray-600 mt-1">Auto-generated documentation</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">Developer Portal</p>
                  <p className="text-xs text-gray-600 mt-1">API Explorer, Code samples</p>
                  <p className="text-xs text-gray-600">Sandbox environment</p>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-200">
            <h4 className="font-bold text-gray-800 mb-3">API Naming Conventions</h4>
            <div className="grid grid-cols-2 gap-3 text-sm">
              <div className="space-y-2">
                <div className="bg-green-50 p-2 rounded">
                  <p className="font-semibold text-green-700">✓ Good Examples</p>
                  <code className="text-xs block mt-1 text-gray-700">
                    GET /api/v1/customers<br/>
                    GET /api/v1/customers/123<br/>
                    POST /api/v1/orders<br/>
                    PUT /api/v1/products/456<br/>
                    PATCH /api/v1/customers/123<br/>
                    DELETE /api/v1/cart/789
                  </code>
                </div>
              </div>
              <div className="space-y-2">
                <div className="bg-red-50 p-2 rounded">
                  <p className="font-semibold text-red-700">✗ Bad Examples</p>
                  <code className="text-xs block mt-1 text-gray-700">
                    GET /api/getCustomers<br/>
                    POST /api/customer-create<br/>
                    GET /api/getAllProductsList<br/>
                    POST /api/updateOrder<br/>
                    GET /api/delete_cart
                  </code>
                </div>
              </div>
            </div>
          </div>

          <div className="grid grid-cols-3 gap-3">
            <div className="bg-purple-50 p-3 rounded-lg border-l-4 border-purple-500">
              <h5 className="font-bold text-purple-800 text-sm mb-2">HTTP Status Codes</h5>
              <ul className="text-xs space-y-1">
                <li>• 200 OK - Success</li>
                <li>• 201 Created - New resource</li>
                <li>• 400 Bad Request - Invalid input</li>
                <li>• 401 Unauthorized - Auth required</li>
                <li>• 404 Not Found - Resource missing</li>
                <li>• 500 Server Error - Backend issue</li>
              </ul>
            </div>

            <div className="bg-orange-50 p-3 rounded-lg border-l-4 border-orange-500">
              <h5 className="font-bold text-orange-800 text-sm mb-2">Pagination</h5>
              <code className="text-xs block text-gray-700">
                GET /products?<br/>
                page=1&limit=20<br/>
                <br/>
                Response headers:<br/>
                X-Total-Count: 1250<br/>
                X-Page-Count: 63
              </code>
            </div>

            <div className="bg-pink-50 p-3 rounded-lg border-l-4 border-pink-500">
              <h5 className="font-bold text-pink-800 text-sm mb-2">Filtering & Sorting</h5>
              <code className="text-xs block text-gray-700">
                GET /products?<br/>
                category=shirts&<br/>
                color=blue&<br/>
                sort=price_asc&<br/>
                minPrice=100
              </code>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Implementation Roadmap",
      subtitle: "Phased Approach - 18 Months Timeline",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-green-500 to-teal-500 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">Integration Transformation Journey</h3>
          </div>

          <div className="space-y-3">
            <div className="bg-blue-50 p-4 rounded-lg border-l-4 border-blue-500">
              <div className="flex items-center justify-between mb-2">
                <h4 className="font-bold text-blue-800">Phase 1: Foundation (Tháng 1-6)</h4>
                <span className="bg-blue-200 text-blue-800 text-xs px-3 py-1 rounded-full font-semibold">Q1-Q2</span>
              </div>
              <div className="grid grid-cols-2 gap-3 text-sm">
                <div className="bg-white p-3 rounded shadow-sm">
                  <p className="font-semibold text-gray-800 mb-1">Technical Foundation</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Deploy API Gateway (Kong)</li>
                    <li>• Setup Message Queue (RabbitMQ)</li>
                    <li>• Implement Authentication (OAuth 2.0)</li>
                    <li>• Establish monitoring stack</li>
                  </ul>
                </div>
                <div className="bg-white p-3 rounded shadow-sm">
                  <p className="font-semibold text-gray-800 mb-1">Quick Wins</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• E-commerce ↔ Inventory integration</li>
                    <li>• POS ↔ CRM basic sync</li>
                    <li>• Payment gateway connections</li>
                    <li>• Basic customer profile API</li>
                  </ul>
                </div>
              </div>
            </div>

            <div className="bg-green-50 p-4 rounded-lg border-l-4 border-green-500">
              <div className="flex items-center justify-between mb-2">
                <h4 className="font-bold text-green-800">Phase 2: Core Integration (Tháng 7-12)</h4>
                <span className="bg-green-200 text-green-800 text-xs px-3 py-1 rounded-full font-semibold">Q3-Q4</span>
              </div>
              <div className="grid grid-cols-2 gap-3 text-sm">
                <div className="bg-white p-3 rounded shadow-sm">
                  <p className="font-semibold text-gray-800 mb-1">Event-Driven Architecture</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Deploy Kafka event streaming</li>
                    <li>• Implement key event topics</li>
                    <li>• Order flow event orchestration</li>
                    <li>• Real-time inventory updates</li>
                  </ul>
                </div>
                <div className="bg-white p-3 rounded shadow-sm">
                  <p className="font-semibold text-gray-800 mb-1">Marketplace Integration</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Shopee, Lazada API integration</li>
                    <li>• TikTok Shop connection</li>
                    <li>• Multi-channel inventory sync</li>
                    <li>• Order aggregation system</li>
                  </ul>
                </div>
              </div>
            </div>

            <div className="bg-purple-50 p-4 rounded-lg border-l-4 border-purple-500">
              <div className="flex items-center justify-between mb-2">
                <h4 className="font-bold text-purple-800">Phase 3: Advanced Capabilities (Tháng 13-18)</h4>
                <span className="bg-purple-200 text-purple-800 text-xs px-3 py-1 rounded-full font-semibold">Q5-Q6</span>
              </div>
              <div className="grid grid-cols-2 gap-3 text-sm">
                <div className="bg-white p-3 rounded shadow-sm">
                  <p className="font-semibold text-gray-800 mb-1">Microservices Migration</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Break monolith into services</li>
                    <li>• Deploy service mesh</li>
                    <li>• Distributed tracing</li>
                    <li>• Chaos engineering tests</li>
                  </ul>
                </div>
                <div className="bg-white p-3 rounded shadow-sm">
                  <p className="font-semibold text-gray-800 mb-1">Intelligence Layer</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Customer MDM implementation</li>
                    <li>• AI-powered recommendations</li>
                    <li>• Predictive analytics</li>
                    <li>• Advanced personalization</li>
                  </ul>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-yellow-50 border-l-4 border-yellow-500 p-3">
            <p className="text-sm text-gray-700">
              <span className="font-semibold">Success Metrics:</span> API availability 99.9%, 
              Integration latency &lt;500ms, Zero-downtime deployments, 80% automated testing coverage
            </p>
          </div>
        </div>
      )
    },
    {
      title: "Technology Stack",
      subtitle: "Recommended Tools & Platforms",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-indigo-500 to-purple-500 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">Modern Integration Technology Stack</h3>
          </div>

          <div className="grid grid-cols-3 gap-3">
            <div className="bg-blue-50 p-3 rounded-lg border-2 border-blue-300">
              <h4 className="font-bold text-blue-800 mb-3 text-sm">API & Integration</h4>
              <div className="space-y-2">
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Kong Gateway</p>
                  <p className="text-xs text-gray-600">API Management</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">MuleSoft / WSO2</p>
                  <p className="text-xs text-gray-600">ESB Platform</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Postman</p>
                  <p className="text-xs text-gray-600">API Testing</p>
                </div>
              </div>
            </div>

            <div className="bg-green-50 p-3 rounded-lg border-2 border-green-300">
              <h4 className="font-bold text-green-800 mb-3 text-sm">Messaging & Events</h4>
              <div className="space-y-2">
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Apache Kafka</p>
                  <p className="text-xs text-gray-600">Event Streaming</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">RabbitMQ</p>
                  <p className="text-xs text-gray-600">Message Queue</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Redis</p>
                  <p className="text-xs text-gray-600">Caching Layer</p>
                </div>
              </div>
            </div>

            <div className="bg-purple-50 p-3 rounded-lg border-2 border-purple-300">
              <h4 className="font-bold text-purple-800 mb-3 text-sm">Containers & Orchestration</h4>
              <div className="space-y-2">
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Docker</p>
                  <p className="text-xs text-gray-600">Containerization</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Kubernetes</p>
                  <p className="text-xs text-gray-600">Orchestration</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Helm</p>
                  <p className="text-xs text-gray-600">Package Manager</p>
                </div>
              </div>
            </div>

            <div className="bg-orange-50 p-3 rounded-lg border-2 border-orange-300">
              <h4 className="font-bold text-orange-800 mb-3 text-sm">Monitoring & Observability</h4>
              <div className="space-y-2">
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Prometheus + Grafana</p>
                  <p className="text-xs text-gray-600">Metrics & Dashboards</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">ELK Stack</p>
                  <p className="text-xs text-gray-600">Log Management</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Jaeger</p>
                  <p className="text-xs text-gray-600">Distributed Tracing</p>
                </div>
              </div>
            </div>

            <div className="bg-pink-50 p-3 rounded-lg border-2 border-pink-300">
              <h4 className="font-bold text-pink-800 mb-3 text-sm">Data Integration</h4>
              <div className="space-y-2">
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Debezium</p>
                  <p className="text-xs text-gray-600">CDC Platform</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Apache Airflow</p>
                  <p className="text-xs text-gray-600">Workflow Orchestration</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Informatica / Talend</p>
                  <p className="text-xs text-gray-600">ETL Tools</p>
                </div>
              </div>
            </div>

            <div className="bg-teal-50 p-3 rounded-lg border-2 border-teal-300">
              <h4 className="font-bold text-teal-800 mb-3 text-sm">Development & CI/CD</h4>
              <div className="space-y-2">
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">GitLab / GitHub</p>
                  <p className="text-xs text-gray-600">Source Control</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">Jenkins / ArgoCD</p>
                  <p className="text-xs text-gray-600">CI/CD Pipeline</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-xs">SonarQube</p>
                  <p className="text-xs text-gray-600">Code Quality</p>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-200">
            <h4 className="font-bold text-gray-800 mb-3 text-center">Technology Selection Criteria</h4>
            <div className="grid grid-cols-4 gap-2 text-xs">
              <div className="bg-blue-50 p-3 rounded text-center">
                <p className="font-semibold mb-1">Scalability</p>
                <p className="text-gray-600">Handle growth</p>
              </div>
              <div className="bg-green-50 p-3 rounded text-center">
                <p className="font-semibold mb-1">Community Support</p>
                <p className="text-gray-600">Active ecosystem</p>
              </div>
              <div className="bg-purple-50 p-3 rounded text-center">
                <p className="font-semibold mb-1">Cloud Native</p>
                <p className="text-gray-600">Modern architecture</p>
              </div>
              <div className="bg-orange-50 p-3 rounded text-center">
                <p className="font-semibold mb-1">Cost Efficiency</p>
                <p className="text-gray-600">TCO optimization</p>
              </div>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Error Handling & Resilience",
      subtitle: "Building Fault-Tolerant Integration",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-red-500 to-orange-500 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">Resilient Integration Patterns</h3>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="bg-blue-50 p-4 rounded-lg border-2 border-blue-300">
              <h4 className="font-bold text-blue-800 mb-3">Retry Strategies</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">Exponential Backoff</p>
                  <p className="text-xs text-gray-600 mt-1">Retry delays: 1s, 2s, 4s, 8s, 16s</p>
                  <p className="text-xs text-gray-600">Max retries: 5 attempts</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">Idempotency Keys</p>
                  <p className="text-xs text-gray-600 mt-1">Prevent duplicate processing</p>
                  <p className="text-xs text-gray-600">Safe retry mechanisms</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">Dead Letter Queue</p>
                  <p className="text-xs text-gray-600 mt-1">Failed messages storage</p>
                  <p className="text-xs text-gray-600">Manual review & reprocessing</p>
                </div>
              </div>
            </div>

            <div className="bg-green-50 p-4 rounded-lg border-2 border-green-300">
              <h4 className="font-bold text-green-800 mb-3">Circuit Breaker Pattern</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-green-700">Closed State</p>
                  <p className="text-xs text-gray-600 mt-1">✓ Normal operation</p>
                  <p className="text-xs text-gray-600">All requests pass through</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-orange-700">Open State</p>
                  <p className="text-xs text-gray-600 mt-1">⚠ Service failure detected</p>
                  <p className="text-xs text-gray-600">Fail fast, return fallback</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-blue-700">Half-Open State</p>
                  <p className="text-xs text-gray-600 mt-1">🔄 Testing recovery</p>
                  <p className="text-xs text-gray-600">Limited requests allowed</p>
                </div>
              </div>
            </div>
          </div>

          <div className="grid grid-cols-3 gap-3">
            <div className="bg-purple-50 p-3 rounded-lg border-l-4 border-purple-500">
              <h5 className="font-bold text-purple-800 text-sm mb-2">Timeout Configuration</h5>
              <div className="text-xs space-y-1">
                <p><span className="font-semibold">Connection timeout:</span> 3s</p>
                <p><span className="font-semibold">Read timeout:</span> 10s</p>
                <p><span className="font-semibold">Total timeout:</span> 30s</p>
                <p className="text-gray-600 mt-2">Prevent hanging requests</p>
              </div>
            </div>

            <div className="bg-orange-50 p-3 rounded-lg border-l-4 border-orange-500">
              <h5 className="font-bold text-orange-800 text-sm mb-2">Fallback Mechanisms</h5>
              <div className="text-xs space-y-1">
                <p>• Return cached data</p>
                <p>• Serve default values</p>
                <p>• Queue for later processing</p>
                <p>• Graceful degradation</p>
              </div>
            </div>

            <div className="bg-pink-50 p-3 rounded-lg border-l-4 border-pink-500">
              <h5 className="font-bold text-pink-800 text-sm mb-2">Health Checks</h5>
              <div className="text-xs space-y-1">
                <p>• Liveness probe (alive?)</p>
                <p>• Readiness probe (ready?)</p>
                <p>• Dependency checks</p>
                <p>• Auto-restart on failure</p>
              </div>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-200">
            <h4 className="font-bold text-gray-800 mb-3">Error Response Structure</h4>
            <div className="bg-gray-800 text-white p-3 rounded font-mono text-xs">
              <pre>{`{
  "error": {
    "code": "INVENTORY_UNAVAILABLE",
    "message": "Inventory service is temporarily unavailable",
    "details": "Circuit breaker is open. Please try again later.",
    "timestamp": "2025-10-07T10:30:00Z",
    "requestId": "req-abc123",
    "retryAfter": 60
  }
}`}</pre>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Performance Optimization",
      subtitle: "Scaling & Performance Best Practices",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-purple-500 to-blue-500 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">High-Performance Integration Architecture</h3>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="bg-blue-50 p-4 rounded-lg border-2 border-blue-300">
              <h4 className="font-bold text-blue-800 mb-3">Caching Strategies</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">API Gateway Cache</p>
                  <p className="text-xs text-gray-600 mt-1">Cache frequent GET requests</p>
                  <p className="text-xs text-gray-600">TTL: 5-60 seconds</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">Redis Cache Layer</p>
                  <p className="text-xs text-gray-600 mt-1">Product catalog, customer profiles</p>
                  <p className="text-xs text-gray-600">TTL: 15-30 minutes</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">CDN for Static Assets</p>
                  <p className="text-xs text-gray-600 mt-1">Product images, CSS, JS</p>
                  <p className="text-xs text-gray-600">Edge caching globally</p>
                </div>
              </div>
            </div>

            <div className="bg-green-50 p-4 rounded-lg border-2 border-green-300">
              <h4 className="font-bold text-green-800 mb-3">Database Optimization</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">Read Replicas</p>
                  <p className="text-xs text-gray-600 mt-1">Separate read/write traffic</p>
                  <p className="text-xs text-gray-600">Scale read operations</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">Connection Pooling</p>
                  <p className="text-xs text-gray-600 mt-1">Reuse DB connections</p>
                  <p className="text-xs text-gray-600">Min: 10, Max: 100 connections</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">Query Optimization</p>
                  <p className="text-xs text-gray-600 mt-1">Proper indexing strategy</p>
                  <p className="text-xs text-gray-600">Avoid N+1 queries</p>
                </div>
              </div>
            </div>
          </div>

          <div className="grid grid-cols-3 gap-3">
            <div className="bg-purple-50 p-3 rounded-lg border-l-4 border-purple-500">
              <h5 className="font-bold text-purple-800 text-sm mb-2">Async Processing</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Email/SMS notifications</li>
                <li>• Report generation</li>
                <li>• Image processing</li>
                <li>• Analytics aggregation</li>
                <li>• Inventory reconciliation</li>
              </ul>
            </div>

            <div className="bg-orange-50 p-3 rounded-lg border-l-4 border-orange-500">
              <h5 className="font-bold text-orange-800 text-sm mb-2">Load Balancing</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Round-robin algorithm</li>
                <li>• Health-based routing</li>
                <li>• Geographic distribution</li>
                <li>• Auto-scaling triggers</li>
                <li>• Session affinity</li>
              </ul>
            </div>

            <div className="bg-pink-50 p-3 rounded-lg border-l-4 border-pink-500">
              <h5 className="font-bold text-pink-800 text-sm mb-2">API Rate Limiting</h5>
              <div className="text-xs space-y-1">
                <p><span className="font-semibold">Public APIs:</span> 100 req/min</p>
                <p><span className="font-semibold">Partner APIs:</span> 500 req/min</p>
                <p><span className="font-semibold">Internal:</span> 5000 req/min</p>
                <p className="text-gray-600 mt-2">Per API key / IP address</p>
              </div>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-200">
            <h4 className="font-bold text-gray-800 mb-3 text-center">Performance Targets (SLA)</h4>
            <div className="grid grid-cols-4 gap-3 text-sm">
              <div className="bg-blue-50 p-3 rounded text-center">
                <p className="text-2xl font-bold text-blue-600">99.9%</p>
                <p className="text-xs text-gray-600 mt-1">Availability</p>
              </div>
              <div className="bg-green-50 p-3 rounded text-center">
                <p className="text-2xl font-bold text-green-600">&lt;500ms</p>
                <p className="text-xs text-gray-600 mt-1">API Response P95</p>
              </div>
              <div className="bg-purple-50 p-3 rounded text-center">
                <p className="text-2xl font-bold text-purple-600">10K</p>
                <p className="text-xs text-gray-600 mt-1">TPS Capacity</p>
              </div>
              <div className="bg-orange-50 p-3 rounded text-center">
                <p className="text-2xl font-bold text-orange-600">&lt;1%</p>
                <p className="text-xs text-gray-600 mt-1">Error Rate</p>
              </div>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Testing Strategy",
      subtitle: "Comprehensive Integration Testing",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-green-500 to-blue-500 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">Multi-Level Testing Pyramid</h3>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="space-y-3">
              <div className="bg-blue-50 p-4 rounded-lg border-l-4 border-blue-500">
                <h4 className="font-bold text-blue-800 mb-2">Unit Testing</h4>
                <p className="text-sm text-gray-700 mb-2">Test individual components & functions</p>
                <ul className="text-xs space-y-1 text-gray-600">
                  <li>• Service logic validation</li>
                  <li>• Data transformation tests</li>
                  <li>• Mock external dependencies</li>
                  <li>• Target coverage: 80%+</li>
                </ul>
                <div className="mt-3 bg-white p-2 rounded">
                  <p className="text-xs font-semibold">Tools: Jest, JUnit, PyTest</p>
                </div>
              </div>

              <div className="bg-green-50 p-4 rounded-lg border-l-4 border-green-500">
                <h4 className="font-bold text-green-800 mb-2">Integration Testing</h4>
                <p className="text-sm text-gray-700 mb-2">Test service interactions</p>
                <ul className="text-xs space-y-1 text-gray-600">
                  <li>• API contract testing</li>
                  <li>• Database integration</li>
                  <li>• Message queue flow</li>
                  <li>• Third-party API mocks</li>
                </ul>
                <div className="mt-3 bg-white p-2 rounded">
                  <p className="text-xs font-semibold">Tools: Pact, Postman, REST Assured</p>
                </div>
              </div>
            </div>

            <div className="space-y-3">
              <div className="bg-purple-50 p-4 rounded-lg border-l-4 border-purple-500">
                <h4 className="font-bold text-purple-800 mb-2">End-to-End Testing</h4>
                <p className="text-sm text-gray-700 mb-2">Test complete user journeys</p>
                <ul className="text-xs space-y-1 text-gray-600">
                  <li>• Full order flow testing</li>
                  <li>• Multi-channel scenarios</li>
                  <li>• Real data simulation</li>
                  <li>• Run in staging environment</li>
                </ul>
                <div className="mt-3 bg-white p-2 rounded">
                  <p className="text-xs font-semibold">Tools: Cypress, Selenium, Playwright</p>
                </div>
              </div>

              <div className="bg-orange-50 p-4 rounded-lg border-l-4 border-orange-500">
                <h4 className="font-bold text-orange-800 mb-2">Performance Testing</h4>
                <p className="text-sm text-gray-700 mb-2">Load & stress testing</p>
                <ul className="text-xs space-y-1 text-gray-600">
                  <li>• Load testing (expected traffic)</li>
                  <li>• Stress testing (peak + 50%)</li>
                  <li>• Spike testing (sudden surge)</li>
                  <li>• Endurance testing (sustained)</li>
                </ul>
                <div className="mt-3 bg-white p-2 rounded">
                  <p className="text-xs font-semibold">Tools: JMeter, K6, Gatling</p>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-200">
            <h4 className="font-bold text-gray-800 mb-3">Test Automation Pipeline</h4>
            <div className="flex items-center justify-between text-xs">
              <div className="text-center">
                <div className="bg-blue-100 p-2 rounded mb-1">
                  <p className="font-semibold">Code Commit</p>
                </div>
                <p className="text-gray-600">Git push</p>
              </div>
              <div className="text-xl text-gray-400">→</div>
              <div className="text-center">
                <div className="bg-green-100 p-2 rounded mb-1">
                  <p className="font-semibold">Unit Tests</p>
                </div>
                <p className="text-gray-600">Automated</p>
              </div>
              <div className="text-xl text-gray-400">→</div>
              <div className="text-center">
                <div className="bg-purple-100 p-2 rounded mb-1">
                  <p className="font-semibold">Integration Tests</p>
                </div>
                <p className="text-gray-600">Test env</p>
              </div>
              <div className="text-xl text-gray-400">→</div>
              <div className="text-center">
                <div className="bg-orange-100 p-2 rounded mb-1">
                  <p className="font-semibold">E2E Tests</p>
                </div>
                <p className="text-gray-600">Staging</p>
              </div>
              <div className="text-xl text-gray-400">→</div>
              <div className="text-center">
                <div className="bg-pink-100 p-2 rounded mb-1">
                  <p className="font-semibold">Deploy</p>
                </div>
                <p className="text-gray-600">Production</p>
              </div>
            </div>
          </div>

          <div className="grid grid-cols-2 gap-3">
            <div className="bg-red-50 p-3 rounded-lg border-l-4 border-red-500">
              <h5 className="font-bold text-red-800 text-sm mb-2">Chaos Engineering</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Random service failures</li>
                <li>• Network latency injection</li>
                <li>• Database connection drops</li>
                <li>• Test resilience patterns</li>
              </ul>
            </div>

            <div className="bg-teal-50 p-3 rounded-lg border-l-4 border-teal-500">
              <h5 className="font-bold text-teal-800 text-sm mb-2">Security Testing</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• API security scanning</li>
                <li>• Penetration testing</li>
                <li>• Dependency vulnerability check</li>
                <li>• OWASP Top 10 compliance</li>
              </ul>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Governance & Best Practices",
      subtitle: "Integration Standards & Guidelines",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-indigo-500 to-blue-500 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">Integration Center of Excellence (ICoE)</h3>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="bg-blue-50 p-4 rounded-lg border-2 border-blue-300">
              <h4 className="font-bold text-blue-800 mb-3">Design Standards</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-2 rounded shadow-sm flex items-start">
                  <CheckCircle2 className="w-4 h-4 text-green-500 mr-2 mt-0.5 flex-shrink-0" />
                  <div>
                    <p className="font-semibold">API Design Guidelines</p>
                    <p className="text-xs text-gray-600">RESTful naming, versioning, pagination</p>
                  </div>
                </div>
                <div className="bg-white p-2 rounded shadow-sm flex items-start">
                  <CheckCircle2 className="w-4 h-4 text-green-500 mr-2 mt-0.5 flex-shrink-0" />
                  <div>
                    <p className="font-semibold">Event Schema Registry</p>
                    <p className="text-xs text-gray-600">Centralized event definitions</p>
                  </div>
                </div>
                <div className="bg-white p-2 rounded shadow-sm flex items-start">
                  <CheckCircle2 className="w-4 h-4 text-green-500 mr-2 mt-0.5 flex-shrink-0" />
                  <div>
                    <p className="font-semibold">Data Format Standards</p>
                    <p className="text-xs text-gray-600">JSON, ISO 8601 dates, UTF-8</p>
                  </div>
                </div>
                <div className="bg-white p-2 rounded shadow-sm flex items-start">
                  <CheckCircle2 className="w-4 h-4 text-green-500 mr-2 mt-0.5 flex-shrink-0" />
                  <div>
                    <p className="font-semibold">Error Handling Conventions</p>
                    <p className="text-xs text-gray-600">Consistent error response format</p>
                  </div>
                </div>
              </div>
            </div>

            <div className="bg-green-50 p-4 rounded-lg border-2 border-green-300">
              <h4 className="font-bold text-green-800 mb-3">Documentation Requirements</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-gray-800">API Documentation</p>
                  <p className="text-xs text-gray-600">OpenAPI specs, examples, SDKs</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-gray-800">Integration Patterns</p>
                  <p className="text-xs text-gray-600">Sequence diagrams, data flows</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-gray-800">Runbooks</p>
                  <p className="text-xs text-gray-600">Deployment, troubleshooting guides</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold text-gray-800">Change Management</p>
                  <p className="text-xs text-gray-600">Version history, migration guides</p>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-200">
            <h4 className="font-bold text-gray-800 mb-3">Integration Review Process</h4>
            <div className="grid grid-cols-4 gap-2 text-xs">
              <div className="bg-blue-50 p-3 rounded">
                <p className="font-semibold mb-1">1. Design Review</p>
                <p className="text-gray-600">Architecture alignment</p>
              </div>
              <div className="bg-green-50 p-3 rounded">
                <p className="font-semibold mb-1">2. Security Review</p>
                <p className="text-gray-600">Threat modeling</p>
              </div>
              <div className="bg-purple-50 p-3 rounded">
                <p className="font-semibold mb-1">3. Code Review</p>
                <p className="text-gray-600">Quality standards</p>
              </div>
              <div className="bg-orange-50 p-3 rounded">
                <p className="font-semibold mb-1">4. Go-Live Approval</p>
                <p className="text-gray-600">Readiness checklist</p>
              </div>
            </div>
          </div>

          <div className="grid grid-cols-3 gap-3">
            <div className="bg-purple-50 p-3 rounded-lg border-l-4 border-purple-500">
              <h5 className="font-bold text-purple-800 text-sm mb-2">Naming Conventions</h5>
              <div className="text-xs space-y-1 font-mono">
                <p>Service: customer-service</p>
                <p>Event: order.created</p>
                <p>API: /api/v1/resources</p>
                <p>Queue: customer-events-queue</p>
              </div>
            </div>

            <div className="bg-orange-50 p-3 rounded-lg border-l-4 border-orange-500">
              <h5 className="font-bold text-orange-800 text-sm mb-2">SLA Management</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Define service SLAs</li>
                <li>• Monitor compliance</li>
                <li>• Incident response time</li>
                <li>• Escalation procedures</li>
              </ul>
            </div>

            <div className="bg-pink-50 p-3 rounded-lg border-l-4 border-pink-500">
              <h5 className="font-bold text-pink-800 text-sm mb-2">Version Control</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Semantic versioning</li>
                <li>• Deprecation policy</li>
                <li>• Backward compatibility</li>
                <li>• Migration support</li>
              </ul>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Cost Optimization Strategy",
      subtitle: "Integration TCO & Resource Management",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-green-500 to-emerald-500 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">Total Cost of Ownership (TCO) Optimization</h3>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="bg-blue-50 p-4 rounded-lg border-2 border-blue-300">
              <h4 className="font-bold text-blue-800 mb-3">Infrastructure Costs</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <div className="flex justify-between items-start mb-2">
                    <p className="font-semibold text-gray-800">Compute Resources</p>
                    <span className="text-xs bg-blue-100 text-blue-700 px-2 py-1 rounded">35%</span>
                  </div>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• API Gateway instances</li>
                    <li>• Microservices containers</li>
                    <li>• Auto-scaling groups</li>
                  </ul>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <div className="flex justify-between items-start mb-2">
                    <p className="font-semibold text-gray-800">Data Storage</p>
                    <span className="text-xs bg-blue-100 text-blue-700 px-2 py-1 rounded">25%</span>
                  </div>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Databases (RDS, MongoDB)</li>
                    <li>• Object storage (S3)</li>
                    <li>• Cache (Redis, Memcached)</li>
                  </ul>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <div className="flex justify-between items-start mb-2">
                    <p className="font-semibold text-gray-800">Network & CDN</p>
                    <span className="text-xs bg-blue-100 text-blue-700 px-2 py-1 rounded">15%</span>
                  </div>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Data transfer costs</li>
                    <li>• Load balancers</li>
                    <li>• CDN bandwidth</li>
                  </ul>
                </div>
              </div>
            </div>

            <div className="bg-green-50 p-4 rounded-lg border-2 border-green-300">
              <h4 className="font-bold text-green-800 mb-3">Cost Optimization Tactics</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-3 rounded shadow-sm flex items-start">
                  <CheckCircle2 className="w-4 h-4 text-green-500 mr-2 mt-0.5 flex-shrink-0" />
                  <div>
                    <p className="font-semibold">Right-Sizing Resources</p>
                    <p className="text-xs text-gray-600">Monitor utilization, adjust sizing</p>
                    <p className="text-xs text-green-600 font-semibold">Savings: 20-30%</p>
                  </div>
                </div>
                <div className="bg-white p-3 rounded shadow-sm flex items-start">
                  <CheckCircle2 className="w-4 h-4 text-green-500 mr-2 mt-0.5 flex-shrink-0" />
                  <div>
                    <p className="font-semibold">Reserved Instances</p>
                    <p className="text-xs text-gray-600">1-3 year commitments</p>
                    <p className="text-xs text-green-600 font-semibold">Savings: 30-50%</p>
                  </div>
                </div>
                <div className="bg-white p-3 rounded shadow-sm flex items-start">
                  <CheckCircle2 className="w-4 h-4 text-green-500 mr-2 mt-0.5 flex-shrink-0" />
                  <div>
                    <p className="font-semibold">Auto-Scaling Policies</p>
                    <p className="text-xs text-gray-600">Scale down during off-peak</p>
                    <p className="text-xs text-green-600 font-semibold">Savings: 15-25%</p>
                  </div>
                </div>
                <div className="bg-white p-3 rounded shadow-sm flex items-start">
                  <CheckCircle2 className="w-4 h-4 text-green-500 mr-2 mt-0.5 flex-shrink-0" />
                  <div>
                    <p className="font-semibold">Caching Strategy</p>
                    <p className="text-xs text-gray-600">Reduce API calls, DB queries</p>
                    <p className="text-xs text-green-600 font-semibold">Savings: 10-20%</p>
                  </div>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-200">
            <h4 className="font-bold text-gray-800 mb-3">Monthly Cost Breakdown Estimate</h4>
            <div className="grid grid-cols-5 gap-2 text-xs">
              <div className="bg-blue-50 p-3 rounded text-center">
                <p className="text-2xl font-bold text-blue-600">$3,500</p>
                <p className="text-gray-600 mt-1">API Gateway & LB</p>
              </div>
              <div className="bg-green-50 p-3 rounded text-center">
                <p className="text-2xl font-bold text-green-600">$4,200</p>
                <p className="text-gray-600 mt-1">Compute (K8s)</p>
              </div>
              <div className="bg-purple-50 p-3 rounded text-center">
                <p className="text-2xl font-bold text-purple-600">$2,800</p>
                <p className="text-gray-600 mt-1">Databases</p>
              </div>
              <div className="bg-orange-50 p-3 rounded text-center">
                <p className="text-2xl font-bold text-orange-600">$1,500</p>
                <p className="text-gray-600 mt-1">Message Queue</p>
              </div>
              <div className="bg-pink-50 p-3 rounded text-center">
                <p className="text-2xl font-bold text-pink-600">$12K</p>
                <p className="text-gray-600 mt-1">Total/Month</p>
              </div>
            </div>
          </div>

          <div className="grid grid-cols-2 gap-3">
            <div className="bg-purple-50 p-3 rounded-lg border-l-4 border-purple-500">
              <h5 className="font-bold text-purple-800 text-sm mb-2">Licensing Costs</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Prefer open-source tools</li>
                <li>• Enterprise support when needed</li>
                <li>• Evaluate SaaS vs self-hosted</li>
                <li>• Negotiate volume discounts</li>
              </ul>
            </div>

            <div className="bg-orange-50 p-3 rounded-lg border-l-4 border-orange-500">
              <h5 className="font-bold text-orange-800 text-sm mb-2">Operational Costs</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• DevOps team: 3-4 engineers</li>
                <li>• Monitoring & alerting tools</li>
                <li>• Training & certifications</li>
                <li>• Third-party API charges</li>
              </ul>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Risk Management & Mitigation",
      subtitle: "Integration Risk Assessment",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-red-500 to-orange-500 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">Integration Risk Matrix</h3>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="space-y-3">
              <div className="bg-red-50 p-4 rounded-lg border-2 border-red-300">
                <div className="flex items-center mb-3">
                  <AlertCircle className="w-5 h-5 text-red-600 mr-2" />
                  <h4 className="font-bold text-red-800">High Risk Areas</h4>
                </div>
                <div className="space-y-2 text-sm">
                  <div className="bg-white p-3 rounded shadow">
                    <p className="font-semibold text-gray-800">Single Point of Failure</p>
                    <p className="text-xs text-gray-600 mt-1">Risk: Payment gateway outage</p>
                    <p className="text-xs text-red-600 mt-1"><span className="font-semibold">Mitigation:</span> Multiple payment providers</p>
                  </div>
                  <div className="bg-white p-3 rounded shadow">
                    <p className="font-semibold text-gray-800">Data Loss</p>
                    <p className="text-xs text-gray-600 mt-1">Risk: Message queue failure</p>
                    <p className="text-xs text-red-600 mt-1"><span className="font-semibold">Mitigation:</span> Persistent storage, backups</p>
                  </div>
                  <div className="bg-white p-3 rounded shadow">
                    <p className="font-semibold text-gray-800">Security Breach</p>
                    <p className="text-xs text-gray-600 mt-1">Risk: API key compromise</p>
                    <p className="text-xs text-red-600 mt-1"><span className="font-semibold">Mitigation:</span> Rotation, encryption, monitoring</p>
                  </div>
                </div>
              </div>
            </div>

            <div className="space-y-3">
              <div className="bg-yellow-50 p-4 rounded-lg border-2 border-yellow-300">
                <div className="flex items-center mb-3">
                  <AlertCircle className="w-5 h-5 text-yellow-600 mr-2" />
                  <h4 className="font-bold text-yellow-800">Medium Risk Areas</h4>
                </div>
                <div className="space-y-2 text-sm">
                  <div className="bg-white p-3 rounded shadow">
                    <p className="font-semibold text-gray-800">Performance Degradation</p>
                    <p className="text-xs text-gray-600 mt-1">Risk: Traffic spikes</p>
                    <p className="text-xs text-yellow-600 mt-1"><span className="font-semibold">Mitigation:</span> Auto-scaling, load testing</p>
                  </div>
                  <div className="bg-white p-3 rounded shadow">
                    <p className="font-semibold text-gray-800">Integration Complexity</p>
                    <p className="text-xs text-gray-600 mt-1">Risk: Hard to maintain</p>
                    <p className="text-xs text-yellow-600 mt-1"><span className="font-semibold">Mitigation:</span> Documentation, standards</p>
                  </div>
                  <div className="bg-white p-3 rounded shadow">
                    <p className="font-semibold text-gray-800">Third-Party Changes</p>
                    <p className="text-xs text-gray-600 mt-1">Risk: API deprecation</p>
                    <p className="text-xs text-yellow-600 mt-1"><span className="font-semibold">Mitigation:</span> Adapter pattern, monitoring</p>
                  </div>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-200">
            <h4 className="font-bold text-gray-800 mb-3">Business Continuity Plan</h4>
            <div className="grid grid-cols-3 gap-3 text-sm">
              <div className="bg-blue-50 p-3 rounded">
                <p className="font-semibold text-blue-800 mb-2">Disaster Recovery</p>
                <ul className="text-xs text-gray-700 space-y-1">
                  <li>• RTO: 4 hours</li>
                  <li>• RPO: 15 minutes</li>
                  <li>• Multi-region deployment</li>
                  <li>• Regular DR drills</li>
                </ul>
              </div>
              <div className="bg-green-50 p-3 rounded">
                <p className="font-semibold text-green-800 mb-2">Backup Strategy</p>
                <ul className="text-xs text-gray-700 space-y-1">
                  <li>• Automated daily backups</li>
                  <li>• Point-in-time recovery</li>
                  <li>• Cross-region replication</li>
                  <li>• 30-day retention</li>
                </ul>
              </div>
              <div className="bg-purple-50 p-3 rounded">
                <p className="font-semibold text-purple-800 mb-2">Incident Response</p>
                <ul className="text-xs text-gray-700 space-y-1">
                  <li>• On-call rotation (24/7)</li>
                  <li>• Escalation matrix</li>
                  <li>• Post-mortem process</li>
                  <li>• Communication plan</li>
                </ul>
              </div>
            </div>
          </div>

          <div className="grid grid-cols-3 gap-3">
            <div className="bg-pink-50 p-3 rounded-lg border-l-4 border-pink-500">
              <h5 className="font-bold text-pink-800 text-sm mb-2">Vendor Lock-in</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Use open standards</li>
                <li>• Abstraction layers</li>
                <li>• Multi-cloud strategy</li>
                <li>• Exit planning</li>
              </ul>
            </div>

            <div className="bg-indigo-50 p-3 rounded-lg border-l-4 border-indigo-500">
              <h5 className="font-bold text-indigo-800 text-sm mb-2">Compliance Risk</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Regular audits</li>
                <li>• Data privacy controls</li>
                <li>• Regulatory monitoring</li>
                <li>• Training programs</li>
              </ul>
            </div>

            <div className="bg-teal-50 p-3 rounded-lg border-l-4 border-teal-500">
              <h5 className="font-bold text-teal-800 text-sm mb-2">Technical Debt</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Code review process</li>
                <li>• Refactoring sprints</li>
                <li>• Tech debt backlog</li>
                <li>• Quality metrics</li>
              </ul>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Success Metrics & KPIs",
      subtitle: "Measuring Integration Success",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-green-500 to-blue-500 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">Integration Performance Dashboard</h3>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="bg-blue-50 p-4 rounded-lg border-2 border-blue-300">
              <h4 className="font-bold text-blue-800 mb-3">Technical KPIs</h4>
              <div className="space-y-2">
                <div className="bg-white p-3 rounded shadow">
                  <div className="flex justify-between items-center mb-1">
                    <p className="font-semibold text-sm">API Availability</p>
                    <span className="text-lg font-bold text-green-600">99.95%</span>
                  </div>
                  <div className="w-full bg-gray-200 rounded-full h-2">
                    <div className="bg-green-500 h-2 rounded-full" style={{width: '99.95%'}}></div>
                  </div>
                  <p className="text-xs text-gray-600 mt-1">Target: 99.9%</p>
                </div>

                <div className="bg-white p-3 rounded shadow">
                  <div className="flex justify-between items-center mb-1">
                    <p className="font-semibold text-sm">Avg Response Time</p>
                    <span className="text-lg font-bold text-green-600">342ms</span>
                  </div>
                  <div className="w-full bg-gray-200 rounded-full h-2">
                    <div className="bg-green-500 h-2 rounded-full" style={{width: '68%'}}></div>
                  </div>
                  <p className="text-xs text-gray-600 mt-1">Target: &lt;500ms</p>
                </div>

                <div className="bg-white p-3 rounded shadow">
                  <div className="flex justify-between items-center mb-1">
                    <p className="font-semibold text-sm">Error Rate</p>
                    <span className="text-lg font-bold text-green-600">0.3%</span>
                  </div>
                  <div className="w-full bg-gray-200 rounded-full h-2">
                    <div className="bg-green-500 h-2 rounded-full" style={{width: '70%'}}></div>
                  </div>
                  <p className="text-xs text-gray-600 mt-1">Target: &lt;1%</p>
                </div>
              </div>
            </div>

            <div className="bg-green-50 p-4 rounded-lg border-2 border-green-300">
              <h4 className="font-bold text-green-800 mb-3">Business KPIs</h4>
              <div className="space-y-2">
                <div className="bg-white p-3 rounded shadow">
                  <div className="flex justify-between items-center">
                    <div>
                      <p className="font-semibold text-sm">Order Processing Time</p>
                      <p className="text-xs text-gray-600">From cart to fulfillment</p>
                    </div>
                    <span className="text-lg font-bold text-blue-600">8 min</span>
                  </div>
                  <p className="text-xs text-green-600 mt-2">↓ 40% improvement</p>
                </div>

                <div className="bg-white p-3 rounded shadow">
                  <div className="flex justify-between items-center">
                    <div>
                      <p className="font-semibold text-sm">Inventory Sync Accuracy</p>
                      <p className="text-xs text-gray-600">Cross-channel consistency</p>
                    </div>
                    <span className="text-lg font-bold text-blue-600">98.5%</span>
                  </div>
                  <p className="text-xs text-green-600 mt-2">↑ 15% improvement</p>
                </div>

                <div className="bg-white p-3 rounded shadow">
                  <div className="flex justify-between items-center">
                    <div>
                      <p className="font-semibold text-sm">Customer Data Quality</p>
                      <p className="text-xs text-gray-600">Single customer view</p>
                    </div>
                    <span className="text-lg font-bold text-blue-600">95%</span>
                  </div>
                  <p className="text-xs text-green-600 mt-2">↑ 25% improvement</p>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-200">
            <h4 className="font-bold text-gray-800 mb-3 text-center">Monthly Integration Statistics</h4>
            <div className="grid grid-cols-4 gap-3 text-center text-sm">
              <div className="bg-blue-50 p-3 rounded">
                <p className="text-3xl font-bold text-blue-600">450M</p>
                <p className="text-xs text-gray-600 mt-1">API Calls/Month</p>
              </div>
              <div className="bg-green-50 p-3 rounded">
                <p className="text-3xl font-bold text-green-600">2.5M</p>
                <p className="text-xs text-gray-600 mt-1">Events Processed</p>
              </div>
              <div className="bg-purple-50 p-3 rounded">
                <p className="text-3xl font-bold text-purple-600">150K</p>
                <p className="text-xs text-gray-600 mt-1">Orders Integrated</p>
              </div>
              <div className="bg-orange-50 p-3 rounded">
                <p className="text-3xl font-bold text-orange-600">99.2%</p>
                <p className="text-xs text-gray-600 mt-1">Success Rate</p>
              </div>
            </div>
          </div>

          <div className="grid grid-cols-3 gap-3">
            <div className="bg-purple-50 p-3 rounded-lg border-l-4 border-purple-500">
              <h5 className="font-bold text-purple-800 text-sm mb-2">Developer Experience</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• API integration time: 2 days</li>
                <li>• Developer satisfaction: 8.5/10</li>
                <li>• Documentation quality: 9/10</li>
                <li>• Support response time: &lt;2h</li>
              </ul>
            </div>

            <div className="bg-orange-50 p-3 rounded-lg border-l-4 border-orange-500">
              <h5 className="font-bold text-orange-800 text-sm mb-2">Operational Efficiency</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Manual interventions: ↓60%</li>
                <li>• MTTR (Mean Time to Repair): 15min</li>
                <li>• Deployment frequency: Daily</li>
                <li>• Change failure rate: &lt;5%</li>
              </ul>
            </div>

            <div className="bg-pink-50 p-3 rounded-lg border-l-4 border-pink-500">
              <h5 className="font-bold text-pink-800 text-sm mb-2">Customer Impact</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Cart abandonment: ↓22%</li>
                <li>• Order accuracy: 99.5%</li>
                <li>• Customer satisfaction: +18%</li>
                <li>• Repeat purchase rate: +12%</li>
              </ul>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Next Steps & Recommendations",
      subtitle: "Action Plan for Coolmate",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-indigo-600 to-purple-600 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center text-lg">Strategic Recommendations</h3>
            <p className="text-sm text-center">Roadmap to Integration Excellence</p>
          </div>

          <div className="space-y-3">
            <div className="bg-green-50 p-4 rounded-lg border-l-4 border-green-500">
              <div className="flex items-center mb-3">
                <span className="bg-green-500 text-white rounded-full w-8 h-8 flex items-center justify-center font-bold mr-3">1</span>
                <h4 className="font-bold text-green-800 text-lg">Immediate Actions (Q1 2025)</h4>
              </div>
              <div className="grid grid-cols-2 gap-3 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800 mb-2">✓ Foundation Setup</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Deploy Kong API Gateway</li>
                    <li>• Setup monitoring stack (Prometheus/Grafana)</li>
                    <li>• Implement OAuth 2.0 authentication</li>
                    <li>• Establish API design standards</li>
                  </ul>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800 mb-2">✓ Quick Wins</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Real-time inventory sync (Web ↔ POS)</li>
                    <li>• Customer profile API integration</li>
                    <li>• Payment gateway standardization</li>
                    <li>• Basic error handling & logging</li>
                  </ul>
                </div>
              </div>
            </div>

            <div className="bg-blue-50 p-4 rounded-lg border-l-4 border-blue-500">
              <div className="flex items-center mb-3">
                <span className="bg-blue-500 text-white rounded-full w-8 h-8 flex items-center justify-center font-bold mr-3">2</span>
                <h4 className="font-bold text-blue-800 text-lg">Medium-term (Q2-Q3 2025)</h4>
              </div>
              <div className="grid grid-cols-2 gap-3 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800 mb-2">✓ Event-Driven Architecture</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Deploy Apache Kafka</li>
                    <li>• Implement key event topics</li>
                    <li>• Build event consumers</li>
                    <li>• Event schema registry</li>
                  </ul>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800 mb-2">✓ Marketplace Integration</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Shopee, Lazada, Tiki APIs</li>
                    <li>• TikTok Shop connection</li>
                    <li>• Multi-channel order management</li>
                    <li>• Unified product catalog</li>
                  </ul>
                </div>
              </div>
            </div>

            <div className="bg-purple-50 p-4 rounded-lg border-l
<div className="bg-purple-50 p-4 rounded-lg border-l-4 border-purple-500">
              <div className="flex items-center mb-3">
                <span className="bg-purple-500 text-white rounded-full w-8 h-8 flex items-center justify-center font-bold mr-3">3</span>
                <h4 className="font-bold text-purple-800 text-lg">Long-term (Q4 2025 - Q2 2026)</h4>
              </div>
              <div className="grid grid-cols-2 gap-3 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800 mb-2">✓ Advanced Capabilities</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Customer MDM implementation</li>
                    <li>• AI-powered recommendations</li>
                    <li>• Predictive analytics engine</li>
                    <li>• Advanced personalization</li>
                  </ul>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800 mb-2">✓ Microservices Migration</p>
                  <ul className="text-xs text-gray-600 space-y-1">
                    <li>• Break down monolith</li>
                    <li>• Service mesh deployment</li>
                    <li>• Distributed tracing</li>
                    <li>• Chaos engineering</li>
                  </ul>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-300">
            <h4 className="font-bold text-gray-800 mb-3 text-center">Critical Success Factors</h4>
            <div className="grid grid-cols-3 gap-3">
              <div className="bg-blue-50 p-4 rounded-lg text-center">
                <p className="text-4xl mb-2">👥</p>
                <p className="font-bold text-blue-800 mb-1">Team Building</p>
                <p className="text-xs text-gray-600">Hire 2-3 integration specialists, upskill existing team</p>
              </div>
              <div className="bg-green-50 p-4 rounded-lg text-center">
                <p className="text-4xl mb-2">📋</p>
                <p className="font-bold text-green-800 mb-1">Governance</p>
                <p className="text-xs text-gray-600">Establish ICoE, define standards, API lifecycle</p>
              </div>
              <div className="bg-purple-50 p-4 rounded-lg text-center">
                <p className="text-4xl mb-2">💰</p>
                <p className="font-bold text-purple-800 mb-1">Budget Allocation</p>
                <p className="text-xs text-gray-600">$150K initial, $12K/month operational costs</p>
              </div>
            </div>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="bg-orange-50 p-4 rounded-lg border-2 border-orange-300">
              <h4 className="font-bold text-orange-800 mb-3">Technology Partners</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold">Cloud Provider</p>
                  <p className="text-xs text-gray-600">AWS / Google Cloud / Azure</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold">Integration Platform</p>
                  <p className="text-xs text-gray-600">MuleSoft / WSO2 / Kong</p>
                </div>
                <div className="bg-white p-2 rounded shadow-sm">
                  <p className="font-semibold">System Integrator</p>
                  <p className="text-xs text-gray-600">Local or regional partner</p>
                </div>
              </div>
            </div>

            <div className="bg-pink-50 p-4 rounded-lg border-2 border-pink-300">
              <h4 className="font-bold text-pink-800 mb-3">Risk Mitigation</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-2 rounded shadow-sm flex items-start">
                  <span className="text-red-500 mr-2">⚠</span>
                  <div>
                    <p className="font-semibold text-xs">Start small, iterate fast</p>
                    <p className="text-xs text-gray-600">Phased approach reduces risk</p>
                  </div>
                </div>
                <div className="bg-white p-2 rounded shadow-sm flex items-start">
                  <span className="text-red-500 mr-2">⚠</span>
                  <div>
                    <p className="font-semibold text-xs">Keep legacy running</p>
                    <p className="text-xs text-gray-600">Zero-downtime migration</p>
                  </div>
                </div>
                <div className="bg-white p-2 rounded shadow-sm flex items-start">
                  <span className="text-red-500 mr-2">⚠</span>
                  <div>
                    <p className="font-semibold text-xs">Measure everything</p>
                    <p className="text-xs text-gray-600">Data-driven decisions</p>
                  </div>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-gradient-to-r from-green-500 to-emerald-500 text-white p-4 rounded-lg text-center">
            <p className="text-lg font-bold mb-2">Expected ROI: 250% over 24 months</p>
            <p className="text-sm">Through operational efficiency, reduced errors, faster time-to-market, and improved customer experience</p>
          </div>
        </div>
      )
    },
    {
      title: "Security & Compliance",
      subtitle: "Integration Security Framework",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-red-600 to-pink-600 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">Zero Trust Integration Security</h3>
          </div>

          <div className="grid grid-cols-2 gap-4">
            <div className="bg-blue-50 p-4 rounded-lg border-2 border-blue-300">
              <h4 className="font-bold text-blue-800 mb-3">Authentication & Authorization</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">OAuth 2.0 / OpenID Connect</p>
                  <p className="text-xs text-gray-600 mt-1">Token-based authentication</p>
                  <p className="text-xs text-gray-600">Short-lived access tokens (15min)</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">API Key Management</p>
                  <p className="text-xs text-gray-600 mt-1">Encrypted storage in vault</p>
                  <p className="text-xs text-gray-600">Automatic rotation every 90 days</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">JWT Tokens</p>
                  <p className="text-xs text-gray-600 mt-1">Signed with RS256 algorithm</p>
                  <p className="text-xs text-gray-600">Include user roles & permissions</p>
                </div>
              </div>
            </div>

            <div className="bg-green-50 p-4 rounded-lg border-2 border-green-300">
              <h4 className="font-bold text-green-800 mb-3">Data Protection</h4>
              <div className="space-y-2 text-sm">
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">Encryption at Rest</p>
                  <p className="text-xs text-gray-600 mt-1">AES-256 for database & storage</p>
                  <p className="text-xs text-gray-600">Encrypted backups</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">Encryption in Transit</p>
                  <p className="text-xs text-gray-600 mt-1">TLS 1.3 for all connections</p>
                  <p className="text-xs text-gray-600">Certificate pinning</p>
                </div>
                <div className="bg-white p-3 rounded shadow">
                  <p className="font-semibold text-gray-800">PII Data Masking</p>
                  <p className="text-xs text-gray-600 mt-1">Mask sensitive data in logs</p>
                  <p className="text-xs text-gray-600">Tokenization for payment data</p>
                </div>
              </div>
            </div>
          </div>

          <div className="grid grid-cols-3 gap-3">
            <div className="bg-purple-50 p-3 rounded-lg border-l-4 border-purple-500">
              <h5 className="font-bold text-purple-800 text-sm mb-2">Network Security</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• WAF (Web Application Firewall)</li>
                <li>• DDoS protection</li>
                <li>• IP whitelisting for B2B APIs</li>
                <li>• VPN for internal services</li>
                <li>• Network segmentation</li>
              </ul>
            </div>

            <div className="bg-orange-50 p-3 rounded-lg border-l-4 border-orange-500">
              <h5 className="font-bold text-orange-800 text-sm mb-2">Compliance</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• GDPR compliance (if EU customers)</li>
                <li>• Vietnam data protection law</li>
                <li>• PCI DSS for payments</li>
                <li>• SOC 2 Type II certification</li>
                <li>• Regular compliance audits</li>
              </ul>
            </div>

            <div className="bg-pink-50 p-3 rounded-lg border-l-4 border-pink-500">
              <h5 className="font-bold text-pink-800 text-sm mb-2">Audit & Monitoring</h5>
              <ul className="text-xs space-y-1 text-gray-700">
                <li>• Comprehensive audit logs</li>
                <li>• Real-time security alerts</li>
                <li>• Access log retention (1 year)</li>
                <li>• Anomaly detection (AI-powered)</li>
                <li>• Regular penetration testing</li>
              </ul>
            </div>
          </div>

          <div className="bg-white p-4 rounded-lg border-2 border-gray-200">
            <h4 className="font-bold text-gray-800 mb-3">Security Checklist for API Integration</h4>
            <div className="grid grid-cols-2 gap-3 text-xs">
              <div className="space-y-1">
                <div className="flex items-center bg-green-50 p-2 rounded">
                  <span className="text-green-600 mr-2">✓</span>
                  <span>HTTPS/TLS mandatory for all endpoints</span>
                </div>
                <div className="flex items-center bg-green-50 p-2 rounded">
                  <span className="text-green-600 mr-2">✓</span>
                  <span>Rate limiting per API key</span>
                </div>
                <div className="flex items-center bg-green-50 p-2 rounded">
                  <span className="text-green-600 mr-2">✓</span>
                  <span>Input validation & sanitization</span>
                </div>
                <div className="flex items-center bg-green-50 p-2 rounded">
                  <span className="text-green-600 mr-2">✓</span>
                  <span>SQL injection prevention</span>
                </div>
              </div>
              <div className="space-y-1">
                <div className="flex items-center bg-green-50 p-2 rounded">
                  <span className="text-green-600 mr-2">✓</span>
                  <span>CORS policy configuration</span>
                </div>
                <div className="flex items-center bg-green-50 p-2 rounded">
                  <span className="text-green-600 mr-2">✓</span>
                  <span>API versioning strategy</span>
                </div>
                <div className="flex items-center bg-green-50 p-2 rounded">
                  <span className="text-green-600 mr-2">✓</span>
                  <span>Secrets management (HashiCorp Vault)</span>
                </div>
                <div className="flex items-center bg-green-50 p-2 rounded">
                  <span className="text-green-600 mr-2">✓</span>
                  <span>Regular security patching</span>
                </div>
              </div>
            </div>
          </div>
        </div>
      )
    },
    {
      title: "Real-World Integration Scenarios",
      subtitle: "Coolmate Use Cases",
      content: (
        <div className="space-y-4">
          <div className="bg-gradient-to-r from-blue-600 to-cyan-600 text-white p-4 rounded-lg">
            <h3 className="font-bold mb-2 text-center">End-to-End Integration Flows</h3>
          </div>

          <div className="space-y-3">
            <div className="bg-blue-50 p-4 rounded-lg border-2 border-blue-300">
              <h4 className="font-bold text-blue-800 mb-3">Scenario 1: Omnichannel Order Processing</h4>
              <div className="bg-white p-3 rounded">
                <div className="flex items-center justify-between text-xs mb-3">
                  <div className="text-center flex-1">
                    <div className="bg-blue-100 p-2 rounded mb-1">
                      <p className="font-semibold">Customer Order</p>
                    </div>
                    <p className="text-gray-600">Web/Mobile/Store</p>
                  </div>
                  <div className="text-lg text-gray-400">→</div>
                  <div className="text-center flex-1">
                    <div className="bg-green-100 p-2 rounded mb-1">
                      <p className="font-semibold">Order Service</p>
                    </div>
                    <p className="text-gray-600">Validate & Create</p>
                  </div>
                  <div className="text-lg text-gray-400">→</div>
                  <div className="text-center flex-1">
                    <div className="bg-purple-100 p-2 rounded mb-1">
                      <p className="font-semibold">Inventory Check</p>
                    </div>
                    <p className="text-gray-600">Reserve stock</p>
                  </div>
                  <div className="text-lg text-gray-400">→</div>
                  <div className="text-center flex-1">
                    <div className="bg-orange-100 p-2 rounded mb-1">
                      <p className="font-semibold">Payment</p>
                    </div>
                    <p className="text-gray-600">Process payment</p>
                  </div>
                  <div className="text-lg text-gray-400">→</div>
                  <div className="text-center flex-1">
                    <div className="bg-pink-100 p-2 rounded mb-1">
                      <p className="font-semibold">Fulfillment</p>
                    </div>
                    <p className="text-gray-600">Ship & Notify</p>
                  </div>
                </div>
                <div className="bg-gray-50 p-2 rounded text-xs">
                  <p className="font-semibold mb-1">Integration Points:</p>
                  <p className="text-gray-700">• E-commerce → Order API • Inventory API (real-time sync) • Payment Gateway • Shipping API • Email/SMS notification • CRM update</p>
                </div>
              </div>
            </div>

            <div className="bg-green-50 p-4 rounded-lg border-2 border-green-300">
              <h4 className="font-bold text-green-800 mb-3">Scenario 2: Customer Profile Unification</h4>
              <div className="bg-white p-3 rounded">
                <div className="grid grid-cols-3 gap-2 text-xs mb-3">
                  <div className="bg-blue-50 p-3 rounded text-center">
                    <p className="font-bold mb-1">📱 Mobile App</p>
                    <p className="text-gray-600 text-xs">Profile, Preferences</p>
                  </div>
                  <div className="bg-purple-50 p-3 rounded text-center">
                    <p className="font-bold mb-1">🌐 Website</p>
                    <p className="text-gray-600 text-xs">Browsing, Purchases</p>
                  </div>
                  <div className="bg-green-50 p-3 rounded text-center">
                    <p className="font-bold mb-1">🏪 In-Store</p>
                    <p className="text-gray-600 text-xs">POS Transactions</p>
                  </div>
                </div>
                <div className="text-center mb-3">
                  <div className="text-2xl text-gray-400">↓</div>
                  <div className="bg-gradient-to-r from-indigo-500 to-purple-500 text-white p-3 rounded">
                    <p className="font-bold">Customer MDM (Master Data Hub)</p>
                    <p className="text-xs mt-1">Single Golden Record</p>
                  </div>
                  <div className="text-2xl text-gray-400">↓</div>
                </div>
                <div className="grid grid-cols-3 gap-2 text-xs">
                  <div className="bg-orange-50 p-3 rounded text-center">
                    <p className="font-bold mb-1">🎯 Marketing</p>
                    <p className="text-gray-600 text-xs">Personalized campaigns</p>
                  </div>
                  <div className="bg-pink-50 p-3 rounded text-center">
                    <p className="font-bold mb-1">💬 Support</p>
                    <p className="text-gray-600 text-xs">360° customer view</p>
                  </div>
                  <div className="bg-teal-50 p-3 rounded text-center">
                    <p className="font-bold mb-1">📊 Analytics</p>
                    <p className="text-gray-600 text-xs">Behavior insights</p>
                  </div>
                </div>
              </div>
            </div>

            <div className="bg-purple-50 p-4 rounded-lg border-2 border-purple-300">
              <h4 className="font-bold text-purple-800 mb-3">Scenario 3: Marketplace Sync</h4>
              <div className="bg-white p-3 rounded text-sm">
                <p className="font-semibold mb-2">Real-time Product & Inventory Synchronization</p>
                <div className="grid grid-cols-2 gap-3">
                  <div>
                    <p className="text-xs font-semibold text-gray-700 mb-1">Outbound (Coolmate → Marketplaces):</p>
                    <ul className="text-xs text-gray-600 space-y-1">
                      <li>• Product catalog updates</li>
                      <li>• Price changes</li>
                      <li>• Stock levels (every 5 min)</li>
                      <li>• Promotions & campaigns</li>
                    </ul>
                  </div>
                  <div>
                    <p className="text-xs font-semibold text-gray-700 mb-1">Inbound (Marketplaces → Coolmate):</p>
                    <ul className="text-xs text-gray-600 space-y-1">
                      <li>• New orders (real-time webhook)</li>
                      <li>• Order status updates</li>
                      <li>• Customer reviews</li>
                      <li>• Return requests</li>
                    </ul>
                  </div>
                </div>
                <div className="mt-3 bg-blue-50 p-2 rounded text-xs">
                  <p className="font-semibold">Platforms: Shopee • Lazada • Tiki • TikTok Shop</p>
                </div>
              </div>
            </div>
          </div>

          <div className="bg-orange-50 p-3 rounded-lg border-l-4 border-orange-500">
            <h5 className="font-bold text-orange-800 text-sm mb-2">Business Impact</h5>
            <div className="grid grid-cols-3 gap-2 text-xs">
              <div className="bg-white p-2 rounded">
                <p className="font-semibold">⚡ Speed</p>
                <p className="text-gray-600">Order processing: 20min → 8min</p>
              </div>
              <div className="bg-white p-2 rounded">
                <p className="font-semibold">🎯 Accuracy</p>
                <p className="text-gray-600">Inventory sync: 85% → 98.5%</p>
              </div>
              <div className="bg-white p-2 rounded">
                <p className="font-semibold">😊 Experience</p>
                <p className="text-gray-600">Customer satisfaction: +18%</p>
              </div>
            </div>
          </div>
        </div>
      )
    }
