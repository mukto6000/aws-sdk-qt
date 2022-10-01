// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describehapgresponse.h"
#include "describehapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::DescribeHapgResponse
 * \brief The DescribeHapgResponse class provides an interace for CloudHsm DescribeHapg responses.
 *
 * \inmodule QtAwsCloudHsm
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHsmClient::describeHapg
 */

/*!
 * Constructs a DescribeHapgResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHapgResponse::DescribeHapgResponse(
        const DescribeHapgRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmResponse(new DescribeHapgResponsePrivate(this), parent)
{
    setRequest(new DescribeHapgRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHapgRequest * DescribeHapgResponse::request() const
{
    Q_D(const DescribeHapgResponse);
    return static_cast<const DescribeHapgRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsm DescribeHapg \a response.
 */
void DescribeHapgResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHapgResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsm::DescribeHapgResponsePrivate
 * \brief The DescribeHapgResponsePrivate class provides private implementation for DescribeHapgResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a DescribeHapgResponsePrivate object with public implementation \a q.
 */
DescribeHapgResponsePrivate::DescribeHapgResponsePrivate(
    DescribeHapgResponse * const q) : CloudHsmResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsm DescribeHapg response element from \a xml.
 */
void DescribeHapgResponsePrivate::parseDescribeHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHapgResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsm
} // namespace QtAws
