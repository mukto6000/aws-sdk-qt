// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresponseheaderspolicyresponse.h"
#include "deleteresponseheaderspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteResponseHeadersPolicyResponse
 * \brief The DeleteResponseHeadersPolicyResponse class provides an interace for CloudFront DeleteResponseHeadersPolicy responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteResponseHeadersPolicy
 */

/*!
 * Constructs a DeleteResponseHeadersPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResponseHeadersPolicyResponse::DeleteResponseHeadersPolicyResponse(
        const DeleteResponseHeadersPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteResponseHeadersPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteResponseHeadersPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResponseHeadersPolicyRequest * DeleteResponseHeadersPolicyResponse::request() const
{
    Q_D(const DeleteResponseHeadersPolicyResponse);
    return static_cast<const DeleteResponseHeadersPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteResponseHeadersPolicy \a response.
 */
void DeleteResponseHeadersPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResponseHeadersPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteResponseHeadersPolicyResponsePrivate
 * \brief The DeleteResponseHeadersPolicyResponsePrivate class provides private implementation for DeleteResponseHeadersPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteResponseHeadersPolicyResponsePrivate object with public implementation \a q.
 */
DeleteResponseHeadersPolicyResponsePrivate::DeleteResponseHeadersPolicyResponsePrivate(
    DeleteResponseHeadersPolicyResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteResponseHeadersPolicy response element from \a xml.
 */
void DeleteResponseHeadersPolicyResponsePrivate::parseDeleteResponseHeadersPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResponseHeadersPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
