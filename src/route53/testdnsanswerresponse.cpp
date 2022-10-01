// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testdnsanswerresponse.h"
#include "testdnsanswerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::TestDNSAnswerResponse
 * \brief The TestDNSAnswerResponse class provides an interace for Route53 TestDNSAnswer responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::testDNSAnswer
 */

/*!
 * Constructs a TestDNSAnswerResponse object for \a reply to \a request, with parent \a parent.
 */
TestDNSAnswerResponse::TestDNSAnswerResponse(
        const TestDNSAnswerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new TestDNSAnswerResponsePrivate(this), parent)
{
    setRequest(new TestDNSAnswerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestDNSAnswerRequest * TestDNSAnswerResponse::request() const
{
    Q_D(const TestDNSAnswerResponse);
    return static_cast<const TestDNSAnswerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 TestDNSAnswer \a response.
 */
void TestDNSAnswerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestDNSAnswerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::TestDNSAnswerResponsePrivate
 * \brief The TestDNSAnswerResponsePrivate class provides private implementation for TestDNSAnswerResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a TestDNSAnswerResponsePrivate object with public implementation \a q.
 */
TestDNSAnswerResponsePrivate::TestDNSAnswerResponsePrivate(
    TestDNSAnswerResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 TestDNSAnswer response element from \a xml.
 */
void TestDNSAnswerResponsePrivate::parseTestDNSAnswerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestDNSAnswerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
