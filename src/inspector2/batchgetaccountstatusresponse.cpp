// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetaccountstatusresponse.h"
#include "batchgetaccountstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::BatchGetAccountStatusResponse
 * \brief The BatchGetAccountStatusResponse class provides an interace for Inspector2 BatchGetAccountStatus responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::batchGetAccountStatus
 */

/*!
 * Constructs a BatchGetAccountStatusResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetAccountStatusResponse::BatchGetAccountStatusResponse(
        const BatchGetAccountStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new BatchGetAccountStatusResponsePrivate(this), parent)
{
    setRequest(new BatchGetAccountStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetAccountStatusRequest * BatchGetAccountStatusResponse::request() const
{
    Q_D(const BatchGetAccountStatusResponse);
    return static_cast<const BatchGetAccountStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 BatchGetAccountStatus \a response.
 */
void BatchGetAccountStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetAccountStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::BatchGetAccountStatusResponsePrivate
 * \brief The BatchGetAccountStatusResponsePrivate class provides private implementation for BatchGetAccountStatusResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a BatchGetAccountStatusResponsePrivate object with public implementation \a q.
 */
BatchGetAccountStatusResponsePrivate::BatchGetAccountStatusResponsePrivate(
    BatchGetAccountStatusResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 BatchGetAccountStatus response element from \a xml.
 */
void BatchGetAccountStatusResponsePrivate::parseBatchGetAccountStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetAccountStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
