// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountresponse.h"
#include "getaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetAccountResponse
 * \brief The GetAccountResponse class provides an interace for SESv2 GetAccount responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::getAccount
 */

/*!
 * Constructs a GetAccountResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountResponse::GetAccountResponse(
        const GetAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetAccountResponsePrivate(this), parent)
{
    setRequest(new GetAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccountRequest * GetAccountResponse::request() const
{
    Q_D(const GetAccountResponse);
    return static_cast<const GetAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetAccount \a response.
 */
void GetAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetAccountResponsePrivate
 * \brief The GetAccountResponsePrivate class provides private implementation for GetAccountResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetAccountResponsePrivate object with public implementation \a q.
 */
GetAccountResponsePrivate::GetAccountResponsePrivate(
    GetAccountResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetAccount response element from \a xml.
 */
void GetAccountResponsePrivate::parseGetAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
