// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copyprojectversionresponse.h"
#include "copyprojectversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::CopyProjectVersionResponse
 * \brief The CopyProjectVersionResponse class provides an interace for Rekognition CopyProjectVersion responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the API Reference for <a href="https://docs.aws.amazon.com/rekognition/latest/dg/images.html">Amazon Rekognition
 *  Image</a>, <a href="https://docs.aws.amazon.com/rekognition/latest/customlabels-dg/what-is.html">Amazon Rekognition
 *  Custom Labels</a>, <a href="https://docs.aws.amazon.com/rekognition/latest/dg/video.html">Amazon Rekognition Stored
 *  Video</a>, <a href="https://docs.aws.amazon.com/rekognition/latest/dg/streaming-video.html">Amazon Rekognition Streaming
 *  Video</a>. It provides descriptions of actions, data types, common parameters, and common
 * 
 *  errors>
 * 
 *  <b>Amazon Rekognition Image</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CompareFaces.html">CompareFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateCollection.html">CreateCollection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteCollection.html">DeleteCollection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteFaces.html">DeleteFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeCollection.html">DescribeCollection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectFaces.html">DetectFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectLabels.html">DetectLabels</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectModerationLabels.html">DetectModerationLabels</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectProtectiveEquipment.html">DetectProtectiveEquipment</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectText.html">DetectText</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetCelebrityInfo.html">GetCelebrityInfo</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_IndexFaces.html">IndexFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListCollections.html">ListCollections</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListFaces.html">ListFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_RecognizeCelebrities.html">RecognizeCelebrities</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_SearchFaces.html">SearchFaces</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_SearchFacesByImage.html">SearchFacesByImage</a>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Amazon Rekognition Custom Labels</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CopyProjectVersion.html">CopyProjectVersion</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateDataset.html">CreateDataset</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateProject.html">CreateProject</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateProjectVersion.html">CreateProjectVersion</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteDataset.html">DeleteDataset</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteProject.html">DeleteProject</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteProjectPolicy.html">DeleteProjectPolicy</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteProjectVersion.html">DeleteProjectVersion</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeDataset.html">DescribeDataset</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeProjects.html">DescribeProjects</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeProjectVersions.html">DescribeProjectVersions</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DetectCustomLabels.html">DetectCustomLabels</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DistributeDatasetEntries.html">DistributeDatasetEntries</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListDatasetEntries.html">ListDatasetEntries</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListDatasetLabels.html">ListDatasetLabels</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListProjectPolicies.html">ListProjectPolicies</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_PutProjectPolicy.html">PutProjectPolicy</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartProjectVersion.html">StartProjectVersion</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StopProjectVersion.html">StopProjectVersion</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_UpdateDatasetEntries.html">UpdateDatasetEntries</a>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Amazon Rekognition Video Stored Video</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetCelebrityRecognition.html">GetCelebrityRecognition</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetContentModeration.html">GetContentModeration</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetFaceDetection.html">GetFaceDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetFaceSearch.html">GetFaceSearch</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetLabelDetection.html">GetLabelDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetPersonTracking.html">GetPersonTracking</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetSegmentDetection.html">GetSegmentDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_GetTextDetection.html">GetTextDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartCelebrityRecognition.html">StartCelebrityRecognition</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartContentModeration.html">StartContentModeration</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartFaceDetection.html">StartFaceDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartFaceSearch.html">StartFaceSearch</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartLabelDetection.html">StartLabelDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartPersonTracking.html">StartPersonTracking</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartSegmentDetection.html">StartSegmentDetection</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartTextDetection.html">StartTextDetection</a>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Amazon Rekognition Video Streaming Video</b>
 * 
 *  </p <ul> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_CreateStreamProcessor.html">CreateStreamProcessor</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DeleteStreamProcessor.html">DeleteStreamProcessor</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_DescribeStreamProcessor.html">DescribeStreamProcessor</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_ListStreamProcessors.html">ListStreamProcessors</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StartStreamProcessor.html">StartStreamProcessor</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_StopStreamProcessor.html">StopStreamProcessor</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/rekognition/latest/APIReference/API_UpdateStreamProcessor.html">UpdateStreamProcessor</a>
 *
 * \sa RekognitionClient::copyProjectVersion
 */

/*!
 * Constructs a CopyProjectVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CopyProjectVersionResponse::CopyProjectVersionResponse(
        const CopyProjectVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new CopyProjectVersionResponsePrivate(this), parent)
{
    setRequest(new CopyProjectVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyProjectVersionRequest * CopyProjectVersionResponse::request() const
{
    Q_D(const CopyProjectVersionResponse);
    return static_cast<const CopyProjectVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition CopyProjectVersion \a response.
 */
void CopyProjectVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopyProjectVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::CopyProjectVersionResponsePrivate
 * \brief The CopyProjectVersionResponsePrivate class provides private implementation for CopyProjectVersionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a CopyProjectVersionResponsePrivate object with public implementation \a q.
 */
CopyProjectVersionResponsePrivate::CopyProjectVersionResponsePrivate(
    CopyProjectVersionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition CopyProjectVersion response element from \a xml.
 */
void CopyProjectVersionResponsePrivate::parseCopyProjectVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyProjectVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
